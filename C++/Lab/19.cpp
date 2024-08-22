#include<iostream>
#include<stdio.h>
using namespace std;
class Complex
{
	private:
		double real,img;
	public:
		Complex()
		{
			real=img=0;
		}
		void read()
		{
			cout<<"Enter real & imaginary part : ";
			cin>>real>>img;
		}
		void display()
		{
			printf("%g %+g i",real,img);
		}
		Complex add(Complex c)
		{
			Complex temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
			return(temp);
		}
};
int main()
{
	Complex c1,c2,c3;
	c1.read();
	c2.read();
	c3=c1.add(c2);
	c1.display();
	cout<<" + ";
	c2.display();
	cout<<" = ";
	c3.display();
	return 0;
}