#include<iostream>
#include<math.h>
using namespace std;
class polar{
	private:
		double radius, theta;
		public:
			polar()
			{
				radius = theta = 0;
				
			}
			polar(double r, double a)
			{
				radius =r;
				theta =a;
				
			}
			void display()
			{
				cout<<"("<<radius<<","<<theta<<")"<<endl;
			}
			int getangle()
			{
				return theta;
			}
			double getradius()
			{
				return radius;
			}
};
class rect
{
	private:
		double x;
		double y;
	public:
		rect()
		{
			x=y=0;
		}
		rect(double a,double b)
		{
			x=a;
			y=b;
		}
		rect(polar p)
		{
			x=p.getradius()*cos(p.getangle());
			y=p.getradius()*sin(p.getangle());
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")";
		}
};
int main()
{
	polar p(10,-1.4);
	rect r;
	r=p;
	r.display();
	p.display();
	return 0;
}