#include<iostream>
using namespace std;

class P
{
public:
	P()
	{
		cout<<"P called"<<endl;
	}
};

class Q:public P
{
public:
	Q()
	{
		cout<<"Q called"<<endl;
	}
};

class R:public Q
{
public:
	R()
	{
		cout<<"R called"<<endl;
	}
};

int main()
{

	R obj;
	return 0;
}
