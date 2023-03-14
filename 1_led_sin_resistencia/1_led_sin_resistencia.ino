int ledVerde = 2;
int ledAmarillo = 7;
int ledRojo = 4;

int ledVerde2 = 12;
int ledAmarillo2 = 9;
int ledRojo2 = 8;


void setup() {
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarillo,OUTPUT);
  pinMode(ledRojo,OUTPUT);

  pinMode(ledVerde2,OUTPUT);
  pinMode(ledAmarillo2,OUTPUT);
  pinMode(ledRojo2,OUTPUT);


}
void prendeVerde(int colorVerde){
  digitalWrite(colorVerde,HIGH);
  delay(1500);
  digitalWrite(colorVerde,LOW);
  delay(400);
  digitalWrite(colorVerde,HIGH);
  delay(400);
  digitalWrite(colorVerde,LOW);
  delay(400);
  digitalWrite(colorVerde,HIGH);
  delay(400);
  digitalWrite(colorVerde,LOW);
  delay(400);
  digitalWrite(colorVerde,HIGH);
  delay(400);
  digitalWrite(colorVerde,LOW);
  delay(400);
  digitalWrite(colorVerde,HIGH);
  delay(400);
  digitalWrite(colorVerde,LOW);
  delay(400);
  digitalWrite(colorVerde,HIGH);
  delay(400);
  digitalWrite(colorVerde,LOW);
  delay(400);
}

void prendeAmarillo (int colorAmarillo){
  digitalWrite(colorAmarillo,HIGH);
  delay(2000);
  digitalWrite(colorAmarillo,LOW);
}

void prendeRojo(int colorRojo){
  digitalWrite(colorRojo,HIGH);
  delay(7900);
  digitalWrite(colorRojo,LOW);
}

void loop() {
prendeRojo(ledRojo2);
prendeVerde(ledVerde);
prendeAmarillo(ledAmarillo);

prendeRojo(ledRojo);
prendeVerde(ledVerde2);
prendeAmarillo(ledAmarillo2);

}
