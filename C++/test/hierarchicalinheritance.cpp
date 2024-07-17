#include<iostream>
using namespace std;
class Shape
{
	public:
		double dim1,dim2;
		void read()
		{
			cout<<"Enter dimension 1 & dimension 2 : ";
			cin>>dim1>>dim2;
		}
		void show()
		{
			cout<<"Dimension 1 : "<<dim1<<endl<<"Dimension 2 : "<<dim2<<endl;
		}
};
class Rectangle:public Shape
{
	private:
		double area,peri;
	public:
		void read()
		{
			Shape::read();
		}
		void compute()
		{
			area=dim1*dim2;
			peri=2*(dim1+dim2);
		}
		void show()
		{
			Shape::show();
			cout<<endl<<"Area = "<<area<<endl;
			cout<<"Perimeter = "<<peri<<endl;
		}
};
class Cuboid:public Shape
{
	private:
		double dim3,area,peri;
	public:
		void read()
		{
			Shape::read();
			cout<<"Enter dimension 3 : ";
			cin>>dim3;
		}
		void compute()
		{
			area=2*(dim1*dim2+dim2*dim3+dim1*dim3);
			peri=4*(dim1+dim2+dim3);
		}
		void show()
		{
			Shape::show();
			cout<<"Dimension 3 : "<<dim3<<endl<<endl<<"Area = "<<area<<endl<<"Perimeter = "<<peri<<endl;
		}
};
int main()
{
	Cuboid c;
	c.read();
	c.compute();
	c.show();
	Rectangle r;
	r.read();
	r.compute();
	r.show();
	return 0;
}