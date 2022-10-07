//import React from 'react';
//import ReactDOM from 'react-dom';
 
class App extends React.Component {
  constructor() {
	  super();
    this.state = {
      contador: 0,
    };
  }
  
  decrementa(){
    this.setState({
      contador : this.state.contador - 1,
    });
  }
  incrementa(){
    this.setState({
      contador : this.state.contador + 1,
    });
  }
 
  render() {
	  return (
	    <div>
        <h1>{this.state.contador}</h1>
        <div>
          <button onClick = {() => this.incrementa()}>Incrementa</button>
          <button onClick = {() => this.decrementa()}>Decrementa</button>
        </div>
      </div>
	  );
  }
};

ReactDOM.render(<App />, document.getElementById("root"));
