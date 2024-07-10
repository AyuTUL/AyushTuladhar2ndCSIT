#include<iostream>
#include<math.h>
using namespace std;
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
		double getRadius()
		{
			return(radius);
		}
		double getAngle()
		{
			return(theta);
		}
};
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
		Rect(Polar p)
		{
			x=p.getRadius()*cos(p.getAngle());
			y=p.getRadius()*sin(p.getAngle());
		}
		void display()
		{
			cout<<" ( "<<x<<" , "<<y<<" ) "<<endl;
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
