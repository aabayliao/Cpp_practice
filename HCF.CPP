#include "iostream.h"
#include "conio.h"

int hcf(int n1, int n2);

void main(void)
{
	int n1, n2;
	cout<<"Enter two positive integers:";
	cin >> n1 >> n2;

	cout << "H.C.F of " << n1 << "&" << n2 << "is:" << hcf(n1,n2);
	getch();
}

int hcf(int n1, int n2)
{
	if(n2!=0)
		return hcf(n2, n1 % n2);
	else
		return n1;
}