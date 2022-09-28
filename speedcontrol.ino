int pwma1 = 3, pwmb1 = 5, pwma2 = 9, pwmb2 = 10;
int sn = A0;
void setup() {

  pinMode(sn, INPUT);
  pinMode(pwma1, OUTPUT);
  pinMode(pwmb1, OUTPUT);
  pinMode(pwma2, OUTPUT);
  pinMode(pwmb2, OUTPUT);
  Serial.begin(9600);
}
void loop() {

  Serial.println(analogRead(sn));
  int val = analogRead(sn);
  val = map(val,0,1023,0,200);
  analogWrite(pwma1,val);
  analogWrite(pwmb1,0);
  
  analogWrite(pwma2,val);
  analogWrite(pwmb2,0);

}
