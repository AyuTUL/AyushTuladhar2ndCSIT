#include<iostream>
#include<math.h>
using namespace std;
class Shape
{
	public:
		double dim1,dim2;
		Shape(double x,double y)
		{
			dim1=x;
			dim2=y;
		}
		void display()
		{
			cout<<"Dimension 1 : "<<dim1<<endl<<"Dimension 2 : "<<dim2<<endl; 
		}
};
class Triangle: public Shape
{
	private:
		double dim3,area;
	public:
		Triangle(double x,double y,double z): Shape(x,y)
		{
			dim3=z;
		}
		void calcArea()
		{
			double s;
			s=(dim1+dim2+dim3)/2;
			area=sqrt(s*(s-dim1)*(s-dim2)*(s-dim3));
		}
		void display()
		{
			calcArea();
			Shape::display();
			cout<<"Dimension 3 : "<<dim3<<endl;
			cout<<"Area = "<<area<<endl;
		}
};
class Rectangle: public Shape
{
	private:
		double area;
	public:
		Rectangle(double x,double y): Shape(x,y)
		{
		}
		void calcArea()
		{
			area=dim1*dim2;
		}
		void display()
		{
			calcArea();
			Shape::display();
			cout<<"Area = "<<area<<endl;
		}
};
int main()
{
	Triangle t(4.56,3.526,6.33);
	Rectangle r(5.78,31.44);
	cout<<"For Triangle :"<<endl;
	t.display();
	cout<<endl<<"For Rectangle :"<<endl;
	r.display();
	return 0;
}
