int a = 0;
int b = 1;
int c = 2;
int d = 3;
int e = 4;
int f = 5;
int g = 6;
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
}

void loop() {
  // put your main code here, to run repeatedly:
  ceroOn();
  delay(1000);
  ceroOff();
  //delay(1000);

  unoOn();
  delay(1000);
  unoOff();
  //delay(1000);

  dosOn();
  delay(1000);
  dosOff();
  

  tresOn();
  delay(1000);
  tresOff();

  
  cuatroOn();
  delay(1000);
  cuatroOff();


  cincoOn();
  delay(1000);
  cincoOff();


  seisOn();
  delay(1000);
  seisOff();


  sieteOn();
  delay(1000);
  sieteOff();


  ochoOn();
  delay(1000);
  ochoOff();


  nueveOn();
  delay(1000);
  nueveOff();

  nueveOn();
  delay(1000);
  nueveOff();

  ochoOn();
  delay(1000);
  ochoOff();

  sieteOn();
  delay(1000);
  sieteOff();

  seisOn();
  delay(1000);
  seisOff();

  cincoOn();
  delay(1000);
  cincoOff();

  cuatroOn();
  delay(1000);
  cuatroOff();

  tresOn();
  delay(1000);
  tresOff();

  dosOn();
  delay(1000);
  dosOff();

  unoOn();
  delay(1000);
  unoOff();

  ceroOn();
  delay(1000);
  ceroOff();
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
