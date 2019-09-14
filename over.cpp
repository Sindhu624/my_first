#include<iostream>
using namespace std;

int square(int x)
{
	return x*x;
}

double square(double y)
{
	return y*y;
}


int main()
{
	cout<<"the square of a integer 7 is:"<<square(7)<<endl;
	cout<<"the square of double 7.5 is "<<square(7.5)<<endl;
	return 0;
}

