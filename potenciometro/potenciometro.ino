int ledPin = 3;//salida led en el pin 3 con opción de PWM
int analogPin = A0;
int valor;
int nuevoValor;

void setup() {
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  valor = analogRead(analogPin);
  delay(300);
  nuevoValor = map(valor, 0, 1023, 0, 255);
  delay(300);
  analogWrite(ledPin, nuevoValor);
  delay(300);
  analogWrite(ledPin, 0);
  delay(300);

}
