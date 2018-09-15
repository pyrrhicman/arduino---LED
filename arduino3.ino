#define VIIVE 400
#define LEDI 8
void setup() {
  // put your setup code here, to run once:
pinMode(LEDI, OUTPUT);
}
void vilkutaLedia(){
  digitalWrite(LEDI,HIGH);
  delay(VIIVE);
  digitalWrite(LEDI,LOW);
  delay(VIIVE);

}
void loop() {
  // put your main code here, to run repeatedly:
vilkutaLedia();
}
