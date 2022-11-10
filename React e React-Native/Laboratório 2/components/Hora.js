import * as React from 'react';
import { Text, View, StyleSheet, ImageBackground } from 'react-native';


class Hora extends React.Component{
  constructor(props){
    super(props);
    console.log("Construtor");
  }

  componentWillUnmount(){
    console.log("Desmontado!")
  }

  componentDidMount(){
    console.log("Acabou de ser montado!");
  }

  componentDidUpdate(){
    console.log("Acabou de atualizar");
  }

  render(){
    return(
      <Text style={{color: 'blue', 
                    fontSize: 40, 
                    fontWeight: 'bold',
                    alignSelf: 'center' }}>{this.props.children}</Text>
    )
  }
}

export default Hora;