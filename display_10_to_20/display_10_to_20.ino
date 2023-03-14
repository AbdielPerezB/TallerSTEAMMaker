int a = 0;
int b = 1;
int c = 2;
int d = 3;
int e = 4;
int f = 5;
int g = 6;

int a2 = 9;
int b2 = 8;
int c2 = 10;
int d2 = 13;
int e2 = 7;
int f2 = 11;
int g2 = 12;
/*
 * 0.
 *    a, b, c, d, e, f
 * 1.
 *    b, c
 * 2.
 *    a, b, g, e, d
 * 3. 
 *    a, b, c, d, g
 * 4.
 *    b, c, f, g
 * 5.
 *    a, c, d, f, g
 * 6.
 *    a, c, d, e, f, g
 * 7.
 *    a, b, c
 * 8. 
 *    a, b, c, d, e, f, g
 * 9.
 *    a, b, c, d, f, g
 * 
 */
void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  pinMode(a2, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(c2, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(e2, OUTPUT);
  pinMode(f2, OUTPUT);
  pinMode(g2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


 unoOn();

 cero2On();
  delay(1000);
  cero ,2Off();
  //delay(1000);
 
 
 uno2On();
  delay(1000);
  uno2Off();
  //delay(1000);

  dos2On();
  delay(1000);
  dos2Off();
  

  tres2On();
  delay(1000);
  tres2Off();

  
  cuatro2On();
  delay(1000);
  cuatro2Off();


  cinco2On();
  delay(1000);
  cinco2Off();


  seis2On();
  delay(1000);
  seis2Off();


  siete2On();
  delay(1000);
  siete2Off();


  ocho2On();
  delay(1000);
  ocho2Off();


  nueve2On();
  delay(1000);
  nueve2Off();

  nueve2On();
  delay(1000);
  nueve2Off();

  unoOff();
  dosOn();
  cero2On();
  delay(1000);
  dosOff();
  cero2Off();
  
}

void ceroOn(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
}
void ceroOff(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
}

//Uno
void unoOn(){
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}
void unoOff(){
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
}

//Dos
void dosOn(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
}
void dosOff(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
}

//Tres
void tresOn(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
}
void tresOff(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
}

//Cuatro
void cuatroOn(){
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void cuatroOff(){
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

//Cinco
void cincoOn(){
  digitalWrite(a, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(d, HIGH);
}
void cincoOff(){
  digitalWrite(a, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(d, HIGH);
}

//Seis
void seisOn(){
  digitalWrite(a, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
}
void seisOff(){
  digitalWrite(a, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
}

void sieteOn(){
  digitalWrite(a, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
}
void sieteOff(){
  digitalWrite(a, LOW);
  digitalWrite(c, LOW);
  digitalWrite(b, LOW);

}

void ochoOn(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
}
void ochoOff(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(f, LOW);
}

void nueveOn(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);

  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
}
void nueveOff(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);

  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void cero2On(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(f2, HIGH);
}
void cero2Off(){
  digitalWrite(a2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(c2, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, LOW);
}

//Uno
void uno2On(){
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
}
void uno2Off(){
  digitalWrite(b2, LOW);
  digitalWrite(c2, LOW);
}

//Dos
void dos2On(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
}
void dos2Off(){
  digitalWrite(a2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
}

//Tres
void tres2On(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(g2, HIGH);
}
void tres2Off(){
  digitalWrite(a2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(c2, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(g2, LOW);
}

//Cuatro
void cuatro2On(){
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);
}
void cuatro2Off(){
  digitalWrite(b2, LOW);
  digitalWrite(c2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(g2, LOW);
}

//Cinco
void cinco2On(){
  digitalWrite(a2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(d2, HIGH);
}
void cinco2Off(){
  digitalWrite(a2, LOW);
  digitalWrite(c2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(d2, HIGH);
}

//Seis
void seis2On(){
  digitalWrite(a2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(g2, HIGH);
}
void seis2Off(){
  digitalWrite(a2, LOW);
  digitalWrite(c2, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(g2, LOW);
}

void siete2On(){
  digitalWrite(a2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(b2, HIGH);
}
void siete2Off(){
  digitalWrite(a2, LOW);
  digitalWrite(c2, LOW);
  digitalWrite(b2, LOW);

}

void ocho2On(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(f2, HIGH);
}
void ocho2Off(){
  digitalWrite(a2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(c2, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(f2, LOW);
}

void nueve2On(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);

  digitalWrite(g2, HIGH);
  digitalWrite(f2, HIGH);
}
void nueve2Off(){
  digitalWrite(a2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(c2, LOW);

  digitalWrite(f2, LOW);
  digitalWrite(g2, LOW);
}
