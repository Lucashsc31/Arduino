const int LED = 9;
const int POT = A3;

int valor = 0;
bool subindo = true;

void setup() {  
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
}

void loop() {
  for(int i = 0; i < 255; i++){
    analogWrite(LED, i);
    delay((analogRead(POT)/500)+1);
  }

  for(int j = 255; j > 0; j--){
    analogWrite(LED, j);
    delay((analogRead(POT)/500)+1);
  }
}
