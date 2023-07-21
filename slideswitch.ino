const int green1=3;
const int green2=11;
const int red1=5;
const int red2=6;
const int red3=9;
const int red4=10;
const int SW1=14;
const int SW2=15;
void setup() {
  pinMode(green1 , OUTPUT);
  pinMode(green2 , OUTPUT);
  pinMode(red1 , OUTPUT);
  pinMode(red2 , OUTPUT);
  pinMode(red3 , OUTPUT);
  pinMode(red4 , OUTPUT);
  pinMode(SW1 , INPUT);
  pinMode(SW2 , INPUT);
}

void loop() {
int reading1 = digitalRead(SW1), reading2 = digitalRead(SW2);
  int brightness1 = map(SW1, 0, 1023, 0, 128);
    int brightness2 = map(SW2, 0, 1023, 0, 128);

if (reading1 == HIGH){
  analogWrite(green1 , brightness1);
  digitalWrite(red1, 255);
    delay(250);}
  else{
    analogWrite(green1 , 0);
  digitalWrite(red1, 0);
    delay(250);}
  
if (reading2 == HIGH){
  analogWrite(green2 , brightness2);
  digitalWrite(red3, 255);
    delay(250);}
  else{
    analogWrite(green2 , 0);
    digitalWrite(red3, 0);
    delay(250);}
  }