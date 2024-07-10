#include<iostream>
#include<math.h>
using namespace std;
class Rect
{
	private:
		double x,y;
	public:
		Rect()
		{
			x=y=0;
		}
		Rect(double a,double b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<" ( "<<x<<" , "<<y<<" ) "<<endl;
		}
};
class Polar
{
	private:
		double radius,theta;
	public:
		Polar()
		{
			radius=theta=0;
		}
		Polar(double r,double t)
		{
			radius=r;
			theta=t;
		}
		void display()
		{
			cout<<" ( "<<radius<<" , "<<theta<<" ) "<<endl;
		}
		operator Rect()
		{
			double x,y;
			x=radius*cos(theta);
			y=radius*sin(theta);
			return(Rect(x,y));
		}
};
int main()
{
	Polar p(10.0,0.78);
	Rect r;
	r=p;
	r.display();
	p.display();
	return 0;
}