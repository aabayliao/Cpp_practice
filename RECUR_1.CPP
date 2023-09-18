//Recursive test

#include <iostream.h>

int func(int n)
{
	if(n == 0)
		return(0);
	return(n+func(n-1));
}
void main()
{
	int a;
	a = func(5);
	cout << a << endl;
}