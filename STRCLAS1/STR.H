// Str.h
//#include <iostream.h>
class String1
{
	char *str;
	int len;
public:
	String1(const char *s);
	String1(int = 0);
	~String1() {delete [] str;}
	void show();
	//{ cout << "Len: " << len << " Str: " << str << endl;}
};