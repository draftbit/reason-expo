<p align="center">
  <img alt="Reason Expo Logo" src="./reason-expo.png" width="256">
</p>

<h3 align="center" style="font-weight:600">
  reason-expo
</h3>

<p align="center">
  <a href="https://reasonml.github.io/">ReasonML</a> bindings for <a href="https://expo.io">Expo</a>
</p>

---

<div align="center">

[![NPM version badge](https://img.shields.io/npm/v/reason-expo.svg)](https://www.npmjs.com/package/reason-expo)

</div>

## Getting started

Use the Expo CLI to bootstrap a project with the ReasonExpo template.

```
expo init <PROJECT_NAME> --template expo-template-reason
```

Already have an existing Expo Project? Go into your project root & then install the requirements:

```bash
yarn add bs-platform --dev
yarn add reason-react reason-react-native reason-expo
```

Next, create a file named bsconfig.json at the same level at your package.json with the following content:

```json
{
  "name": "my-reason-expo-app",
  "reason": {
    "react-jsx": 2
  },
  "bsc-flags": ["-bs-super-errors"],
  "bs-dependencies": ["bs-react-native", "reason-react", "reason-expo"],
  "sources": [
    {
      "dir": "src"
    }
  ],
  "suffix": ".bs.js",
  "refmt": 3,
  "package-specs": {
    "module": "es6",
    "in-source": true
  }
}
```

Next, add these scripts to your package.json:

```json
  "build-reason": "bsb -make-world",
  "watch-reason": "bsb -make-world -w",
  "build-reason-clean": "bsb -clean-world -make-world",
```

Finally, make a folder named `src` and start writing your ReasonML code in there. `yarn build-reason` will compile the ReasonML code in that folder for you to import and use in your Expo app's JS/TS code.

## Contributing

Fork this repo, clone it onto your machine, install run `yarn` in the root directory. Start the compiler and Expo test app with `yarn dev` in the root directory, and start hacking away at the files in `packages/reason-expo` and `packages/test`!

_Credit: This project is based on the work started in [`bs-expo`](https://github.com/fxfactorial/bs-expo/)._
