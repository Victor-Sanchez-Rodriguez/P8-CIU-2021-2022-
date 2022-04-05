float freq_max = 60;
float freq_min = 5;
float freq = 5;
int angle = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(60/freq);
  digitalWrite(LED_BUILTIN, LOW);
  delay(60/freq);
  angle += 10;
  if(angle>360){
    angle-=360;
  }
  freq = map(sin(angle),-1,1,freq_min,freq_max);
