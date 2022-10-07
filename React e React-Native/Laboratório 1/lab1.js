
function MeuComponente(){
    return (
        <div>
      <div style={{backgroundColor: "#add8e6"}}>
        <h2>Computação Móvel</h2>
        <h3>React</h3>
        <h4>Biblioteca JavaScript para criar UI</h4>
        <p>Aula Um</p>
      </div>
      <div style={{backgroundColor: "#90EE90"}}>
        <h2>Vamos utilizar: </h2>
        <ul>
          <li>HTML</li>
          <li>CSS</li>
          <li>JavaScript</li>
        </ul>
      </div>
    </div>
    )
}
ReactDOM.render(<MeuComponente />, document.getElementById('root'));
