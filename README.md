# bs-expo

These are unoffical `reasonml` bindings to the `expo` JS SDK.

## Getting started

**See test-app** for a working expo example.

Great that you want to use Reason with Expo/ReactNative! To get everything
running are just a couple of steps.  Let's assume that you already
have a React Native project. Otherwise follow the ReactNative
[instructions](http://facebook.github.io/react-native/docs/getting-started.html)
until you have your app running.

1. Install [Bucklescript](https://github.com/bloomberg/bucklescript) 
(the Reason -> JS compiler), 
[Reason-React](https://github.com/reasonml/reason-react) and `bs-react-native`:
```sh
# substitute yarn with npm if you prefer
yarn add bs-platform reason-react bs-react-native bs-expo
```

2. Create a `re` folder (there will be your Reason code)
3. Create a `bsconfig.json` with the following content file in your project root
```json
{
    "name": "my-awesome-app",
    "reason": {
        "react-jsx": 2
    },
    "bsc-flags": ["-bs-super-errors"],
    "bs-dependencies": ["bs-react-native", "reason-react", "bs-expo"],
    "sources": [{
        "dir": "re"
    }],
    "refmt": 3
}
```
4. You are nearly done, the last configuration before we get to the fun stuff. In your `package.json` add to the `"scripts"` section two scripts:

```json
"scripts": {
  ...
  "build": "bsb -make-world -clean-world",
  "watch": "bsb -make-world -clean-world -w"
}
```

5. Now you can build all your (so far nonexsisting) Reason in two modes:
  - `yarn run build` performs a single build
  - `yarn run watch` enters the watch mode

6. Now we come to the fun stuff! Create a new file `re/app.re` and make it look like this:

```reason
open BsReactNative;

let app = () =>
  <View style=Style.(style([flex(1.), justifyContent(Center), alignItems(Center)]))>
    <Text value="Reason is awesome!" />
  </View>;
```

and start the watcher with `yarn run watch` if you haven't done it yet.

7. We are nearly done! We now have to adapt `App.js`

```js
import { app } from "./lib/js/re/app.js";
export default app;
```

## Helping out

Lots of easy to finish tasks, just do `yarn start` and you'll see all
the compiler errors to fix.

## Loading Fonts

You will probably need to [load custom fonts](https://docs.expo.io/versions/latest/guides/using-custom-fonts.html#loading-the-font-in-your-app) and also [wait for them to load](https://docs.expo.io/versions/latest/guides/using-custom-fonts.html#waiting-for-the-font-to-load-before-rendering) before using them. You can do this using `BsExpo.Font.loadAll`:

```js
let fontsPromise = BsExpo.Font.loadAll([
  ("MyFont", "path/to/MyFont.ttf"),
  ("MyOtherFont", "path/to/MyOtherFont.otf"),
]);
```
