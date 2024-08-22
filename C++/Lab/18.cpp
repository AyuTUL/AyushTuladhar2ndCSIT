#include<iostream>
using namespace std;
class Distance
{
	private:
		int meter;
		double cm;
	public:
		Distance()
		{
			meter=0;
			cm=0;
		}
		void display()
		{
			cout<<meter<<" m and "<<cm<<" cm"<<endl;
		}
		void read()
		{
			cout<<"Enter distance in m & cm : ";
			cin>>meter>>cm;
		}
		Distance compare(Distance d)
		{
			double total1,total2;
			total1=this->meter*100+this->cm;
			total2=d.meter*100+d.cm;
			if(total1>total2)
				return(*this);
			else
				return(d);
		}
};
int main()
{
	Distance d1,d2,d3;
	d1.read();
	d2.read();
	d3=d1.compare(d2);
	cout<<"Larger distance = ";
	d3.display();
	return 0;
}