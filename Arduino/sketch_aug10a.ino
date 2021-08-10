bool A;bool B;bool C;bool D;bool E;bool Carry;bool Borrow;
void setup()
{
  pinMode(15,INPUT);
  pinMode(16,INPUT);
  pinMode(17,INPUT);
  pinMode(18,INPUT);
  pinMode(19,INPUT);
  pinMode(13,OUTPUT);
  DDRD = 0xFF;
}

void loop()
{
  PORTD == 0x00;
  digitalWrite (13,LOW);
  A = digitalRead(15);
  B = digitalRead(16);
  C = digitalRead(17);
  D = digitalRead(18);
  E = digitalRead(19);

  if(C == 1 && D == 1 && E == 1)
  {
    if(A == 1 && B == 1)
    {
      Carry = 1;
      digitalWrite(13, HIGH);
      PORTD = 0x66;
    }
  }
  if((C == 0 || D == 0) && E == 0)
  {
    if(A == 1 && B == 1)
    {
      Carry = 1;
      digitalWrite(13, HIGH);
      PORTD = 0x66;
    }
  }
  else
  {
    if(A == 0 && B == 1)
    {
      Borrow = 1;
      digitalWrite(13, HIGH);
      PORTD = 0x66;
    }
  }

  delay(5000);


}
