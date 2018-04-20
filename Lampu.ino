int LampuSatu = 7;
int LampuDua = 5;
int LampuTiga = 3;

void setup() {
  pinMode(LampuSatu, OUTPUT);
  pinMode(LampuDua, OUTPUT);
  pinMode(LampuTiga, OUTPUT);
}

void loop() {
  
  digitalWrite(LampuSatu,HIGH);
  delay(1);
  digitalWrite(LampuSatu, LOW);
  
//  digitalWrite(LampuDua, HIGH);   
//  delay(1);    
//  digitalWrite(LampuDua, LOW);
//
//  digitalWrite(LampuTiga,HIGH);
//  delay(1000);
//  digitalWrite(LampuTiga, LOW);
}
