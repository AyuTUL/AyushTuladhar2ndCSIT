#include<iostream>
#include<math.h>
using namespace std;
class Polar
{
	private:
		double radius, theta;
	public:
		Polar()
		{
			radius=theta=0;
		}
		Polar(double r, double a)
		{
			radius = r;
			theta = a;
		}
		void display()
		{
			cout<<"("<<radius<<","<<theta<<")"<<endl;
		}
		double getAngle()
		{
			return theta;
		}
		double getRadius()
		{
			return radius;
		}
};
class Rect
{
	private:
		double x;
		double y;
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
		Rect (Polar p)
		{
			x=p.getRadius()*cos(p.getAngle());
			y=p.getRadius()*sin(p.getAngle());
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
};
int main()
{
	Polar p(10,0.78);
	Rect r;
	r=p;
	r.display();
	p.display();
	return 0;

}

secrets 