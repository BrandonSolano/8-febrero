int tiempo1; int tiempo2; int tiempo3;
int ledrojo = 13; 
int ledazul = 12; 
int ledverde = 11;

void setup() {
  Serial.begin(9600);
  Serial.println("¿Cuantos milisegundos deseas que permanezca encendido el led rojo?");
  while (Serial.available() == 0) {
  }
  tiempo1=Serial.parseInt();
  pinMode(ledrojo, OUTPUT);

  Serial.begin(9600);
  Serial.println("¿Cuantos milisegundos deseas que permanezca encendido el led azul?");
  while (Serial.available() == 0) {
  }
  tiempo2=Serial.parseInt();
  pinMode(ledazul, OUTPUT);

  Serial.begin(9600);
  Serial.println("¿Cuantos milisegundos deseas que permanezca encendido el led verde?");
  while (Serial.available() == 0) {
  }
  tiempo3=Serial.parseInt();
  pinMode(ledverde,OUTPUT);
}

void loop() {
 digitalWrite(ledrojo,HIGH);
delay (tiempo1);
digitalWrite(ledrojo,LOW);
delay (tiempo1);
digitalWrite(ledazul,HIGH);
delay (tiempo2);
digitalWrite(ledazul,LOW);
delay (tiempo2);
digitalWrite(ledverde,HIGH);
delay (tiempo3);
digitalWrite(ledverde,LOW);
delay (tiempo3);

}
