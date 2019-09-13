#include<iostream>
using namespace std;

int maximum(int,int,int);

int main()
{

int a,b,c;

cout<<"enter three integers:";
cin>>a>>b>>c;

cout<<"maximum:"<<maximum(a,b,c)<<endl;
}

int maximum(int a,int b,int c)
{
/*if((a>b)&&(a>c))
	return a;
else if((b>a)&&(b>c))
	return b;
else
	return c;*/
int big;
big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
return big;

}

