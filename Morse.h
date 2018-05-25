#ifndef Morse_h
#define Morse_h
#include "Arduino.h"

class Morse
{
public:
	Morse(int pin);
	void dot();
	void dash();
	void a();
	void b();
	void c();
	void d();
	void e();
	void f();
	void g();
	void h();
	void i();
	void j();
	void j();
	void k();
	void l();
	void m();
	void n();
	void o();
	void p();
	void q();
	void r();
	void s();
	void t();
	void u();
	void v();
	void w();
	void x();
	void y();
	void z();
	void entreletra();
	void espacio();
	void buscar(string str);
private:
	int _pin;
};

#endif

