#include<iostream>
using namespace std;

class base
{
	public:
		base()
		{
			cout<<"constructingh base\n";
		}
		virtual ~base()
		{
			cout<<"Destructin base \n";		
		}
};

class derived:public base
{
	public:
		derived()
		{
			cout<<"constructing derived\n";
		}
		~derived()
		{
			cout<<"destructing derived\n";
		}
};

int main(void)
{
	derived *d=new derived();
	base *b=d;
	delete b;
	//getchar()
	return 0;
}


