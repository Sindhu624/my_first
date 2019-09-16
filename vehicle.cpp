#include<iostream>
using namespace std;


class Vehicle
{
public:
	Vehicle()
	{
		cout<<"This is a vehicle"<<endl;
	}
};

class FourWheeler
{
public:
	FourWheeler()
	{
		cout<<"This is a 4 wheeler vehicle"<<endl;
	}
};

class car:public Vehicle,public FourWheeler
{
};

int main()
{

	car obj;
	return 0;
}
	
