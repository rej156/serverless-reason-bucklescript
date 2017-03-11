let u = [%bs.obj {"aria-label": "foo"}];

let handler  _ _ callback => {
  callback Js.null u
};
