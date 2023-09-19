//Test.cpp
#include "Str.h"
void main()
{
	String1 a;
	a.show();
	String1 b=5;
	b.show();
	String1 c("abcde");
	c.show();
	String1 d = String1("Ken");
	d.show();
	String1 *e = new String1("Allocate");
	e->show();
	delete e;
}