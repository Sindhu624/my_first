#include<iostream>
using namespace std;
class base
{
public:
virtual void print()
{
cout<<"Print base class"<<endl;
}
void show()
{
cout<<"Show base class"<<endl;
}
};
class derived:public base
{
public:
void print()
{
cout<<"Print derived class"<<endl;
}
void show()
{
cout<<"Show derived class"<<endl;
}
};
int main()
{
base *bptr;
derived d;
bptr=&d;
bptr->print();
bptr->show();
}
