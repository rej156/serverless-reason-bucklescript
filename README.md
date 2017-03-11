# ReasonML via bucklescript example

This is an example use case for `bs-loader`

* [__`package.json`__](https://github.com/rrdelaney/bs-loader/blob/master/example/package.json)
* [__Webpack Config__](https://github.com/rrdelaney/bs-loader/blob/master/example/webpack.config.js)
* [__Bucklescript Config__](https://github.com/rrdelaney/bs-loader/blob/master/example/bsconfig.json)

## Building the example

```
./install-ninja.sh
npm run build
```

You'll be able to see the Bucklescript output in `lib/` and the Webpack output in `build/`

## Invoking the lambda function locally

```
npm run invoke-local
```
