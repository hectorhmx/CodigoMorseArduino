#include <Morse.h>

Morse morse = Morse(13);
char c;
String str = "";
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  str = "";
  while(Serial.avaliable){
    c = Serial.read();
    str = str +c;
  }
  morse.buscar(str)
  morse.espacio();
}
