[%bs.raw {|require('./app.css')|}];

[@bs.module] external logoSrc : string = "./logo.svg";

let component = ReasonReact.statelessComponent("App");

let text = ReasonReact.stringToElement;

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="App">
      <div className="App-header">
        <img src=logoSrc className="App-logo" alt="logo" />
        <h2> (text("amazing title")) </h2>
      </div>
      <p className="App-intro">
        (text("To get started, edit"))
        <code> (text(" ??? ")) </code>
        (text("and save to reload."))
      </p>
    </div>
};
