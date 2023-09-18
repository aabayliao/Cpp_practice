#include <iostream.h>
#include <conio.h>
class Account{
public:
	int accno;
	char *name;
	static float rateOfInterest;
	Account(int accno, char *name)
	{
		this->accno = accno;
		this->name = name;
	}
	void display()
	{
		cout << accno << " " << name << " " << rateOfInterest << endl;
	}
};
class A
{
public:
	int x;
	A(int a) //parameterized constructor
	{
		x = a;
	}
	A( A &i) //copy constructor
	{
		x = i.x;
	}
};
class Employee
{
public:
	int id;
	char *name;
	float salary;
	Employee(int id, char *name, float salary)
	{
		cout <<"Constructor Invoked" << endl;
		this->id = id;
		this->name = name;
		this->salary = salary;
	}
	void display()
	{
		cout << id << " " << name << " " << salary << endl;
	}
	~Employee()
	{
		cout << "Destructor Invoked" << endl;
	}
};
float Account::rateOfInterest = 6.5;
void main(void)
{
	clrscr();
	//Employee e1;
	//Employee e2;
	//A a1(20);
	//A a2(a1);
	//cout << a2.x;
#if 0
	Employee e1 = Employee(101, "Sonoo", 890000.0);
	Employee e2 = Employee(102, "Nakul", 59000.0);
	e1.display();
	e2.display();
#endif
	Account a1 = Account(201, "Sanjay");
	Account a2 = Account(202, "Nakul");
	a1.display();
	a2.display();
}
