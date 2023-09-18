//IntStack.h
struct Stack
{
	int sp;
	int buffer[20];
};

//The definition of the function prototype for the stack module
Stack *NewStack();
void push(Stack *hp, int data);
int pop(Stack *hp);
static void Error();
