const int RELE = 9;

void setup() {
  pinMode(RELE, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  String opcao = Serial.readString();

  if(opcao && opcao != ""){
    if(opcao == "ligar"){
      digitalWrite(RELE, HIGH);
    }
    else if(opcao == "desligar"){
      digitalWrite(RELE, LOW);
    }
    else{
      Serial.print("Comando Invalido");
      Serial.println(opcao);
    }
  }
}
