//IntStack.cpp

#include <iostream.h>
#include "IntStack.h"
const MaxSize = 20;

Stack *NewStack()
{
	Stack *hp;
	hp = new Stack;
	hp->sp = 0;
	return hp;
}

void push(Stack *hp, int data)
{
	if(hp->sp == MaxSize) Error();
	hp->buffer[hp->sp++] = data;
}

int pop(Stack *hp)
{
	int iPopData;
	if(hp->sp == 0) Error();
	iPopData = hp->buffer[--hp->sp];
	return iPopData;//hp->buffer[--hp->sp];
}

static void Error()
{
	cout << "\nStack Error\n";
}