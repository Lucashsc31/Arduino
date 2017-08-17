const int LDR = A2;
const int LED = 9;

void setup() {  
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(LDR);
  Serial.println(valor);
  if(valor < 250){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
}
