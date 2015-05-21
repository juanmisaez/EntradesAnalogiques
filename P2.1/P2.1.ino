
const int led0 = 9;
const int ldr0 = A0;

int velocitat = 20;
int valLdr0;


void setup()
{
  pinMode(led0, OUTPUT);
}


void loop()
{
  valLdr0 = analogRead(ldr0);
  valLdr0 = map(valLdr0, 0, 1023, 0, 255);
  analogWrite(led0, valLdr0);
}
