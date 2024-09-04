#include<iostream>
using namespace std;
class Fahrenheit;
class Celsius
{
	private:
		double c;
	public:
		void read()
		{
			cout<<"Enter temperature in "<<(char)248<<"C : ";
			cin>>c;
		}
		void display()
		{
			cout<<c<<(char)248<<" C";
		}
		operator Fahrenheit();
};
class Fahrenheit
{
	private:
		double f;
	public:
		Fahrenheit()
		{
			f=0;
		}
		Fahrenheit(double x)
		{
			f=x;
		}
		void display()
		{
			cout<<f<<(char)248<<" F";
		}
};
Celsius::operator Fahrenheit()
		{
			double f;
			f=(c*9/5.0)+32;
			return(Fahrenheit(f));
		}
int main()
{
	Celsius c;
	Fahrenheit f;
	c.read();
	f=c;
	c.display();
	cout<<" = ";
	f.display();
	return 0;
}
