#include<iostream>
using namespace std;

class Date{
public:
	Date(int=1,int=1,int=1997);
	void print()
	{
		cout<<month<<"/"<<day<<"/"<<year<<endl;
	}
private:
	int month;
	int day;
	int year;
};

Date::Date(int m,int d,int y)
{
	month=m;
	day=d;
	year=y;
}



int main()
{
  
Date date1(3,10,1997),date2;
cout<<"date1=";
date1.print();
cout<<"\ndate2=";
date2.print();

date2=date1;
cout<<"\n\nAfter default memeberwise copy,date2 is:"<<endl;
date2.print();
cout<<endl;

return 0;
}




