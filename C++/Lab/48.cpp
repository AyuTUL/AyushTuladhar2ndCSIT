#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet,inch;
	public:
		void read()
		{
			cout<<"Enter distance in feet & inches : ";
			cin>>feet>>inch;
		}
		void show()
		{
			cout<<feet<<"' "<<inch<<"\""<<endl;
		}
		friend Distance operator +(Distance &d1,Distance &d2);
};
Distance operator +(Distance &d1,Distance &d2)
{
	Distance total;
	total.feet=d1.feet+d2.feet;
	total.inch=d1.inch+d2.inch;
	if(total.inch>=12)
	{
		total.feet+=total.inch/12;
		total.inch=total.inch%12;
	}
	return(total);
}
int main()
{
	Distance d1,d2,d3;
	cout<<"Enter 2 distances : "<<endl;
	d1.read();
	d2.read();
	d1.show();
	d2.show();
	cout<<"Sum = ";
	d3=d1+d2;
	d3.show();
	return 0;
}
