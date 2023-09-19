//Str.cpp
#include "str.h"
#include <string.h>
#include <assert.h>
#include <iostream.h>
#if 1
String1::String1(const char *s)
{
	len = strlen(s);
	str = new char[len+1];
	assert( str != 0);
	strcpy(str, s);
}
#endif
String1::String1(int n)
{
	assert( n >= 0);
	len = n;
	str = new char[len+1];
	assert( str != 0 );
	for(int i=0; i < n; i++) str[i] = '-';
	str[n]=0;
}
void String1::show()
{
	cout << "Len: " << len << " Str: " << str << endl;
}