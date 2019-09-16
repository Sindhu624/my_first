#include<iostream>
using namespace std;

int main()
{
	auto sum=[](auto a,auto b)
	{
		return a+b;
	};
	cout<<sum(1,6)<<endl;
	cout<<sum(1.6,5.6)<<endl;	
	cout<<sum(string("deepa"),string("BI"))<<endl;
	return 0;
}
