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
		Shape(int a, int b)
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
		Rectangle (int a,int b):Shape(a,b)
		{
			
		}
		int area()
		{
			return x*y;
		}
};
class Triangle: public Shape
{
	public:
		Triangle():Shape()
		{
			
		}
		Triangle(int a,int b):Shape(a,b)
		{
			
		}
		int area()
		{
			return (x*y)/2;
		}
};
class square:public Shape
{
	public:
		square():Shape()
		{
		}
		square(int a): Shape(a,a)
		{
			
		}
		int area()
		{
			return x*y;
		}
};
int main()
{
	Shape *s;
	Rectangle r(10,8);
	s=&r;
	cout<<"Area of rect = "<<s->area()<<endl;
	Triangle t(10,6);
	s=&t;
	cout<<"Area of triangle = "<<s->area()<<endl;
	square sq(10);
	s=&sq;
	cout<<"Area of square = "<<s->area();
	return 0;
}