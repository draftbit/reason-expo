# `reason-expo`

ReasonML bindings for Expo

## Getting started

Let's assume that you already
have an Expo project set up. If not, [get Expo running](https://expo.io/learn) and then come back after finished. We'll be happily waiting ☺️

1.  Install [Bucklescript](https://github.com/BuckleScript/bucklescript) (the Reason -> JS compiler), [Reason-React](https://github.com/reasonml/reason-react) and [`bs-react-native`]:

    ```sh
    # substitute yarn with npm if you prefer
    yarn add bs-platform reason-react bs-react-native reason-expo
    ```

1.  Create a `re` folder (there will be your Reason code)
1.  Create a `bsconfig.json` with the following content file in your project root

    ```json
    {
      "name": "my-awesome-app",
      "reason": {
        "react-jsx": 2
      },
      "bsc-flags": ["-bs-super-errors"],
      "bs-dependencies": ["bs-react-native", "reason-react", "reason-expo"],
      "sources": [
        {
          "dir": "re"
        }
      ],
      "refmt": 3
    }
    ```

1.  You are nearly done, the last configuration before we get to the fun stuff. In your `package.json` add to the `"scripts"` section two scripts:

    ```json
    "scripts": {
      ...
      "build": "bsb -make-world -clean-world",
      "watch": "bsb -make-world -clean-world -w"
    }
    ```

1.  Now you can build all your (so far nonexsisting) Reason in two modes:

    * `yarn run build` performs a single build
    * `yarn run watch` enters the watch mode

1.  Now we come to the fun stuff! Create a new file `re/app.re` and make it look like this:

    ```reason
    open BsReactNative;

    let app = () =>
      <View style=Style.(style([flex(1.), justifyContent(Center), alignItems(Center)]))>
        <Text value="Reason is awesome!" />
      </View>;
    ```

    and start the watcher with `yarn run watch` if you haven't done it yet.

1.  We are nearly done! We now have to adapt `App.js`

    ```js
    import { app } from "./lib/js/re/app.js";
    export default app;
    ```

## Disclaimer

These bindings are targeted to Expo SDK 25. There are some components and APIs missing/in-development. You can find an overview of the completed components and APIs [here](./STATUS.md). Contributing new Components and APIs are extremely encouraged!

## Helping out

Lots of easy to finish tasks, just do `yarn install-peers && yarn start` and you'll see all
the compiler errors to fix.

## Loading Fonts

You will probably need to [load custom fonts](https://docs.expo.io/versions/latest/guides/using-custom-fonts.html#loading-the-font-in-your-app) and also [wait for them to load](https://docs.expo.io/versions/latest/guides/using-custom-fonts.html#waiting-for-the-font-to-load-before-rendering) before using them. You can do this using `ReasonExpo.Font.loadAll`:

```reason
let fontsPromise = ReasonExpo.Font.loadAll([
  ("MyFont",  BsReactNative.Packager.require("path/to/MyFont.ttf")),
  ("MyOtherFont", BsReactNative.Packager.require("path/to/MyOtherFont.otf")),
]);
```
