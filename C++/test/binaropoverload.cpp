#include<iostream>
#include<stdio.h>
using namespace std;
class Complex
{
	private:
		float real,img;
	public:
		Complex()
		{
			real=img=0;
		}
		Complex(float r,float i)
		{
			real=r;
			img=i;
		}
		void display()
		{
			printf("%g %+g i\n",real,img);
		}
		Complex operator +(Complex c)
		{
			Complex temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
			return(temp);
		} 
		Complex operator -(Complex c);
};
Complex Complex::operator -(Complex c)
{
	Complex temp;
	temp.real=real-c.real;
	temp.img=img-c.img;
	return(temp);
}
int main()
{
	Complex c1(2.2,-5.1);
	Complex c2(-4.1,6.1);
	Complex c3,c4;
	c3=c1+c2;
	c4=c1-c2;
	c1.display();
	c2.display();
	cout<<"Sum :"<<endl;
	c3.display();
	cout<<"Difference :"<<endl;
	c4.display();
	return 0;
}