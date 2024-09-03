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
			cout<<"Enter real & complex part of complex number : ";
			cin>>real>>img;
		}
		void show()
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
};
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
