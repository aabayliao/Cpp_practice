//Test.cpp
#include <iostream.h>
#include <conio.h>
#include "IntStack.h"

void main()
{
	Stack *hp1, *hp2;
	hp1 = NewStack();
	hp2 = NewStack();
	push(hp1, 1);
	push(hp1, 2);
	push(hp1, 3);
	push(hp2, 7);
	push(hp2, 8);
	push(hp2, 9);
	clrscr();
	cout << pop(hp1); //<< pop(hp2) << pop(hp1)
		 //<< pop(hp2) << pop(hp1) << pop(hp2);
	cout << pop(hp2);
	cout << pop(hp1);
	cout << pop(hp2);
	cout << pop(hp1);
	cout << pop(hp2);
	getch();
}