#include<iostream>
using namespace std;

class Shape
{
	private:
		int length;
		int breath;
		int side;
		int radius;

	public:
		//int Rectangle(int length=1;int breadth=1);
	
		//int Square(int side=1);

		//int Circle(int radius=1);

int Rectangle(int length=1,int breath=1)
{
	return length*breadth;
}

float Square(float side=1)
{
	return side*side;
}
double Circle(double radius=1)
{
	return 3.14*radius*radius;
}
};

int main()
{	
	Shape s;
	cout<<"rectangle area:"<<s.Rectangle(2,4)<<endl;
	cout<<"rectangle area:"<<s.Rectangle()<<endl;
	cout<<"square area:"<<s.Square(5)<<endl;
	cout<<"square area:"<<s.Square()<<endl;
	cout<<"circle area:"<<s.Circle(6)<<endl;
	cout<<"circle area:"<<s.Circle()<<endl;
	return 0;
}
	
	

