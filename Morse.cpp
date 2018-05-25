#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}

void Morse::dot()
{
	digitalWrite(_pin, HIGH);
	delay(250);
	digitalWrite(_pin, LOW);
	delay(250);
}

void Morse::dash()
{
	digitalWrite(_pin, HIGH);
	delay(1000);
	digitalWrite(_pin, LOW);
	delay(250);
}
void Morse::entreletra(){
	delay(300);
}

void Morse::espacio(){
	delay(400);
}

void Morse:: a(){
dot();dash();
}
void Morse:: b(){
dash();dot();dot();dot();
}
void Morse:: c(){
dash();dot();dash();dot();
}
void Morse:: d(){
dash();dot();dot();
}
void Morse:: e(){
dot();
}
void Morse:: f(){
dot();dot();dash();dot();
}
void Morse:: g(){
dash();dash();dot();
}
void Morse:: h(){
dot();dot();dot();dot();
}
void Morse:: i(){
dot();dot();
}
void Morse:: j(){
dot();dash();dash();dash();
}
void Morse:: k(){
dash();dot()dash();
}
void Morse:: l(){
dot();dash();dot();dot();
}
void Morse:: m(){
dash();dash();
}
void Morse:: n(){
dash();dot();
}
void Morse:: o(){
dash();dash();dash();
}
void Morse:: p(){
dot();dash();dash();dot();
}
void Morse:: q(){
dash();dash();dot();dash();
}
void Morse:: r(){
dot();dash();dot();
}
void Morse:: s(){
dot();dot();dot();
}
void Morse:: t(){
dash();
}
void Morse:: u(){
dot();dot();dash();
}
void Morse:: v(){
dot();dot();dot();dash();
}
void Morse:: w(){
dot();dash();dash();
}
void Morse:: x(){
dash();dot();dot();dash();
}
void Morse:: y(){
dash();dot();dash();dash();
}
void Morse:: z(){
dash();dash();dot();dot();
}
void Morse:: buscar(string str){
for(int i =0;i<str.length();i++){
	switch(str[i]){
				case 'a':
				a();
				break;
				case 'b':
					b();
				break;
				case 'c':
					c();
				break;
				case 'd':
					d();
				break;
				case 'e':
					e();
				break;
				case 'f':
					f();
				break;
				case 'g':
					g();
				break;
				case 'h':
					h();
				break;
				case 'i':
					i();
				break;
				case 'j':
					j();
				break;
				case 'k':
					k();
				break;
				case 'l':
					l();
				break;
				case 'm':
					m();
				break;
				case 'n':
					n();
				break;
				case 'o':
					o();
				break;
				case 'p':
					p();
				break;
				case 'q':
					q();
				break;
				case 'r':
					r();
				break;
				case 's':
					s();
				break;
				case 't':
					t();
				break;
				case 'u':
					u();
				break;
				case 'v':
					v();
				break;
				case 'x':
					x();
				break;
				case 'y':
					y();
				break;
				case 'z':
					z();
				break;
				case '_': //se usa _ para separar palabras
					espacio();
				break;
			}
			if(i+1<str.length() and str[i] != ' '){
				entreletra();
			}
	}
}