// Definir los pines para cada segmento de los dos displays
int display1[7] = {7, 8, 9, 10, 11, 12, 13};
int display2[7] = {0, 1, 2, 3, 4, 5, 6};

int t = 600;//Tiempo para el delay

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

void loop(){
  ceroToCien();
  cienToCero();
}

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
