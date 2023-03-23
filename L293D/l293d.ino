// C++ code
//
/*
  Este sketch muestra el uso y funcionamiento del
  CI L293D con un motorreductor

  L293D Datasheet
  https://www.alldatasheet.es/datasheet-pdf/pdf/22432/STMICROELECTRONICS/L293D.html

  Conexiones CI:
     1 - +5V
     2 - Arduino D2
     3 - Motorreductor
     4, 5 - GND
     6 - Motorreductor
     7 - Arduino D3
     8 - +9V
*/

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
}