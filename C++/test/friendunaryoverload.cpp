#include<iostream>
#include<math.h>
using namespace std;
class Space
{
	private:
		int x,y,z;
	public:
		Space()
		{
			x=y=z=0;
		}
		Space(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<"( "<<x<<" , "<<y<<" , "<<z<<" )"<<endl;
		}
		friend void operator ++(Space &s);
		friend void operator -(Space &s);
		double distance (Space s);
};
void operator ++(Space &s)
{
	++s.x;
	++s.y;
	++s.z;
}
void operator -(Space &s)
{
	s.x=-s.x;
	s.y=-s.y;
	s.z=-s.z;
}
double Space::distance(Space s)
{
	double d;
	d=sqrt(pow(x-s.x,2)+pow(y-s.y,2)+pow(z-s.z,2));
	return d;
}
int main()
{
	Space s1(1,2,3);
	Space s2(5,4,6);
	++s1;
	s1.display();
	-s2;
	s2.display();
	double d=s1.distance(s2);
	cout<<"Distance = "<<d;
	return 0;
}