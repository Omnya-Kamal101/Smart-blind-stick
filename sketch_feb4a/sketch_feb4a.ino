#define buzz 4
#define trig 5
#define echo 6
#define led 9
void setup() {
  Serial.begin(9600);
  pinMode(buzz,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
float duration,distance;
   digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo,HIGH);
  distance = duration / 29/ 2;
Serial.print(distance);
if (distance < 10)
{
  tone(buzz, 1000, 500);
  digitalWrite(led, HIGH);
  delay(500);
}
else if (distance < 20)
{
  tone(buzz, 750, 500);
  digitalWrite(led, HIGH);
  delay(500);
}
else if (distance < 50)
{
  tone(buzz, 500, 500);
  digitalWrite(led, LOW);
  delay(500);
}

delay(1000);

}