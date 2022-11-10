import * as React from 'react';
import { Text, View, StyleSheet,TextInput, Image} from 'react-native';
import Constants from 'expo-constants';
import Hora from './components/Hora';
import {Audio} from 'expo-av';

class App extends React.Component {
  constructor(props) {
    super(props);
    this.cont = 0;
    this.state = {
      data: new Date(),
    };
    this.h = 0
    this.m = 0
  }

  componentDidMount() {
    this.ID = setInterval(() => this.tick(), 1000);
  }

  componentDidUpdate() {
    this.cont += 1;
  }

  tick() {
    this.setState({ data: new Date() });
  }

  render() {
    let desp = null;
    var hours = new Date().getHours();
    var min = new Date().getMinutes();
    console.log(this.h)
    console.log(this.m)
    let audio;
    if(this.m == min && this.h == hours){
      desp = <Image source = {{uri:'https://www.imagensanimadas.com/data/media/929/despertador-imagem-animada-0004.gif'}} style={{width: 250, height: 200, resizeMode: 'center',justifyContent:'center', flexDirection: 'row',marginLeft:28}}/>
      audio = Audio.Sound.createAsync(require('./assets/salamisound-7465267-alarm-clock-ringing-pitch-up.mp3'),{shouldPlay: true});
    } 
    else{
      desp = null
    }
    return (
      <View style = {{display: 'flex',flexDirection: 'column',justifyContent: 'center',height: '100%'}}>
      <Text style={{
            color: 'blue',
            fontSize: 40,
            fontWeight: 'bold',
            alignSelf: 'center',
          }}>Hora</Text>
      <TextInput onChangeText={(texto) => this.h = parseInt(texto)} style={{height: 40, borderColor: 'blue', borderWidth: 4, justifyContent: 'center', alignItems: 'center'}} textAlign={'center'}></TextInput>
      <Text style={{
            color: 'blue',
            fontSize: 40,
            fontWeight: 'bold',
            alignSelf: 'center',
          }}>Minuto</Text>
          
          <TextInput onChangeText={(texto) => this.m = parseInt(texto)} style={{height: 40, borderColor: 'blue', borderWidth: 4, justifyContent: 'center', alignItems: 'center'}} textAlign={'center'}></TextInput>

        {desp}
        
        <Hora>{this.state.data.toLocaleTimeString('pt-BR')}</Hora>
        
        <Text
          style={{
            color: 'blue',
            fontSize: 40,
            fontWeight: 'bold',
            alignSelf: 'center',
          }}>
          {this.state.data.getDate()}/{this.state.data.getMonth() + 1}/
          {this.state.data.getFullYear()}
        </Text>
      </View>
    );
  }
}

export default App;
