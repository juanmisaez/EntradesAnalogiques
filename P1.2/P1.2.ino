
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  
  delay(500);
  
  analogWrite(3, 64);
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  
  delay(500);
  
  analogWrite(3, 127);
  analogWrite(5, 64);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  
  delay(500);
  
  analogWrite(3, 191);
  analogWrite(5, 127);
  analogWrite(6, 64);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  
  delay(500);
  
  analogWrite(3, 255);
  analogWrite(5, 191);
  analogWrite(6, 127);
  analogWrite(9, 64);
  analogWrite(10, 0);
  analogWrite(11, 0);
   
  delay(500);
  
  analogWrite(3, 255);
  analogWrite(5, 255);
  analogWrite(6, 191);
  analogWrite(9, 127);
  analogWrite(10, 64);
  analogWrite(11, 0);
  
  delay(500);
  
  analogWrite(3, 255);
  analogWrite(5, 255);
  analogWrite(6, 255);
  analogWrite(9, 191);
  analogWrite(10, 127);
  analogWrite(11, 64);
   
  delay(500);
  
  analogWrite(3, 255);
  analogWrite(5, 255);
  analogWrite(6, 255);
  analogWrite(9, 255);
  analogWrite(10, 191);
  analogWrite(11, 127);
  
  delay(500);
  
  analogWrite(3, 255);
  analogWrite(5, 255);
  analogWrite(6, 255);
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 191);
 
  delay(500);
  
  analogWrite(3, 255);
  analogWrite(5, 255);
  analogWrite(6, 255);
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 255);
  
  delay(500);
}
