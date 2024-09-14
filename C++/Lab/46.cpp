#include<iostream>
#include<stdio.h>
using namespace std;
class Complex
{
	private:
		double real,img;
	public:
		void read()
		{
			cout<<"Enter real & complex : ";
			cin>>real>>img;
		}
		void show()
		{
			printf("%g %+g i\n",real,img);
		}
		friend Complex operator +(Complex &c1,Complex &c2);	
};
Complex operator +(Complex &c1,Complex &c2)
{
	Complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return(temp);
}
int main()
{
	Complex c1,c2,c3;
	cout<<"Enter 2 complex numbers :"<<endl;
	c1.read();
	c2.read();
	c1.show();
	c2.show();
	c3=c1+c2;
	cout<<"Sum = ";
	c3.show();
	return 0;
}
