int valor = 0;
int sensor;


// Definir los pines para cada segmento de los dos displays
int display1[7] = {7, 8, 9, 10, 11, 12, 13};
int display2[7] = {0, 1, 2, 3, 4, 5, 6};

// Definir un arreglo de dos dimensiones que mapee los números a los segmentos necesarios para mostrarlos en los displays
int numeros[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};
void setup() {
  // Configurar los pines como salidas
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = analogRead(A0);
  //sensor = (valor * 99)/1023;
  //sensor = map(valor, 0, 1023, 0, 99);
  //Serial.print("Sensor = ");
  //Serial.println(nuevoValor);

  if(sensor == 0){
    printNumero(0,0);
    
    
  }
  else if(sensor>1 && sensor<103){
    apagar();
    printNumero(0,1);
    delay(100);
  }
  else if(sensor>103 && sensor<206){
    apagar();
    printNumero(0,2);
    delay(100);
  }
  else if(sensor>206 && sensor<310){
    printNumero(0,3);
    delay(100);
  }
  else if(sensor>310 && sensor<413){
    apagar();
    for(int i = 0; i<7; i++){
      digitalWrite(display1[i],numeros[0][i]);
      digitalWrite(display2[i],numeros[4][i]);
    }
    delay(100);
  }
  else if(sensor>413 && sensor<516){
    for(int i = 0; i<7; i++){
      digitalWrite(display1[i],numeros[0][i]);
      digitalWrite(display2[i],numeros[5][i]);
    }
    delay(100);
  }
  else if(sensor>516 && sensor<620){
    for(int i = 0; i<7; i++){
      digitalWrite(display1[i],numeros[0][i]);
      digitalWrite(display2[i],numeros[6][i]);
    }
    delay(100);
  }
  else if(sensor>620 && sensor<723){
    printNumero(0,7);
    delay(100);
  }
  else if(sensor>723 && sensor<826){
    printNumero(0,8);
    delay(100);
  }
  else if(sensor>826 && sensor<930){
    printNumero(0,9);
    delay(100);
  }
  else if(sensor>930 && sensor<1024){
    printNumero(1,0);
    delay(100);
  }

  //delay(300);



}

void apagar(){
  for(int i = 0; i<7; i++){
      digitalWrite(display1[i],LOW);
      digitalWrite(display2[i],LOW);
    }
  
}

void printNumero(int numero1, int numero2){

    for(int i = 0; i<7; i++){
      digitalWrite(display1[i],numeros[numero1][i]);
      digitalWrite(display2[i],numeros[numero2][i]);
    }
}
/*
void ceroToCien(){
  int incrementoDecena = 0;
  while(incrementoDecena < 10){
    
    //Controla el display ixquierdo (display1). El de las decenas
    for(int i = 0; i<7; i++){
      digitalWrite(display2[i],numeros[0][i]);//Iniciamos el display derecho (display2) en '0'
      digitalWrite(display1[i],numeros[incrementoDecena][i]);//incrementoDecena va de 0 a 9 para que el display de las decenas incremente de 0 a 9.
    }
  
    //Controla el display derecho (display2). El de las unidades
    for(int digito = 0; digito<10; digito++){
      for(int i = 0; i<7; i++){
        digitalWrite(display2[i],numeros[digito][i]);
      }
      delay(t);
    }
    incrementoDecena++;
  }
}

void cienToCero(){
  int decenas = 9;
  while(decenas >= 0){
    //Controla el display ixquierdo (display1). El de las decenas
    for(int i = 0; i<7; i++){
      digitalWrite(display2[i],numeros[9][i]);//Iniciamos el display derecho (display2) en '9'
      digitalWrite(display1[i],numeros[decenas][i]);//incrementoDecena va de 9 a 0 para que el display de las decenas decremente de 9 a 0.
    }
  
    //Controla el display derecho (display2). El de las unidades
    for(int digito = 9; digito >= 0; digito--){
      for(int i = 0; i<7; i++){
        digitalWrite(display2[i],numeros[digito][i]);
      }
      delay(t);
    }
    decenas--;
  }

}
*/
