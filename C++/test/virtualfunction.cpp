#include<iostream>
using namespace std;
class Shape
{
	public:
		int x,y;
	Shape()
	{
		x=y=0;
	}
	Shape(int a,int b)
	{
		x=a;
		y=b;
	}
	virtual int area()
	{
		return 0;
	}
};
class Rectangle:public Shape
{
	public:
		Rectangle():Shape()
		{
			
		}
		Rectangle(int a,int b):Shape(a,b)
		{
			
		}
		int area()
		{
			return(x*y);
		}
};
class Square:public Shape
{
	public:
		Square():Shape()
		{
			
		}
		Square(int a,int b):Shape(a,b)
		{
			
		}
		int area()
		{
			return x*y; 
		}
};
class Triangle:public Shape
{
	public:
		int z;
		Triangle():Shape()
		{
			
		}
		Triangle(int a,int b):Shape(a,b)
		{
			
		}
		int area()
		{
			return(x*y)/2;
		}
};
int main()
{
	Shape *s;
	Rectangle r(10,8);
	s=&r;
	cout<<"Area of Rectangle = "<<s->area()<<endl;
	Triangle t(10,6);
	s=&t;
	cout<<"Area of Triangle = "<<s->area()<<endl;
	Square sq(10,10);
	s=&sq;
	cout<<"Area of Square = "<<s->area();
	return 0;
}