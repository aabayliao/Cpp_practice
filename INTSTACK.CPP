#include <iostream.h>

void push(int IntData);
int pop();
static void Error();

const MaxSize = 20;
static buffer[20];
static sp = 0;

void push(int a)
{
	if(sp == MaxSize) Error();
	buffer[sp++] = a;
}

int pop()
{
	if(sp == 0) Error();
	return buffer[--sp];
}

static void Error()
{
	cout << "\nStack Error\n";

}

void main()
{
	push(1);
	push(2);
	push(3);
	cout << pop() << pop() << pop();
}