#include <iostream>

using namespace std;


class A
{
public:
	virtual void show()
	{
		cout << "Class A\n";
	}
};


class B: public A
{

public:
	void show()
	{
		cout << "Class B\n";
	}
};

class C: public A
{

public:
	void show()
	{
		cout << "Class C\n";
	}
	

};

int main()
{
	A* a;
	a = new B;
	a->show();

	a = new C;
	a->show();

	cin.get();
}