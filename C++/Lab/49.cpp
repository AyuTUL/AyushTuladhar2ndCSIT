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
		friend Distance operator -(Distance &d1,Distance &d2);
};
Distance operator -(Distance &d1,Distance &d2)
{
	Distance temp;
	int total1=d1.feet*12+d1.inch;
 	int total2=d2.feet*12+d2.inch;
	int diff=total1-total2;
    temp.feet=diff/12;
    temp.inch=diff%12;
	return(temp);
}
int main()
{
	Distance d1,d2,d3;
	cout<<"Enter 2 distances : "<<endl;
	d1.read();
	d2.read();
	d1.show();
	d2.show();
	cout<<"Difference = ";
	d3=d1-d2;
	d3.show();
	return 0;
}
