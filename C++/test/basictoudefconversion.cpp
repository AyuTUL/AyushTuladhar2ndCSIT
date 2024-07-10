#include<iostream>
using namespace std;
#include<math.h>
class Time
{
	private:
		int hr,min,sec;
	public:
		Time()
		{
			hr=min=sec=0;
		}
		Time(int hr,int min,int sec)
		{
			this->hr=hr;
			this->min=min;
			this->sec=sec;
		}
		Time(double h);
		Time(int s);
		void display()
		{
			cout<<hr<<" : "<<min<<" : "<<sec<<endl;
		}
};
int main()
{
	int s=4000;
	Time t;
	t.display();
	t=s;
	t.display();
	double h=1.31;
	t=h;
	t.display();
	return 0;
}
Time::Time(double h)
{
	hr=floor(h);
	int m=(h-hr)*60;
	min=floor(m);
	sec=(m-min)*60;
}
Time::Time(int s)
{
	hr=s/3600;
	s=s%3600;
	min=s/60;
	sec=s%60;
 } 