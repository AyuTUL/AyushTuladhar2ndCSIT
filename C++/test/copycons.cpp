#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet,inch;
		public:
			Distance()
			{
				feet=inch=0;
			}
			Distance(int f,int i)
			{
				feet=f;
				inch=i;
			}
			Distance(Distance &d1)
			{
				feet=d1.feet;
				inch=d1.inch;
			}
			void display()
			{
				cout<<feet<<" feet "<<inch<<" inch "<<endl;
			}
};
int main()
{
	Distance d1(10,8);
	Distance d2(d1);
	cout<<"Distance d1 :"<<endl;
	d1.display();
	cout<<"Distance d2 "<<endl;
	d2.display();
	return 0;
}