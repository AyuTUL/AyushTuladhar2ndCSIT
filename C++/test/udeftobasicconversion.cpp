#include<iostream>
using namespace std;
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
		void display()
		{
			cout<<hr<<" : "<<min<<" : "<<sec<<endl;
		}
		operator int()
		{
			return(hr*3600+min*60+sec);
		}
		operator double()
		{
			return(hr+min/60.0+sec/3600.0);
		}
};
int main()
{
	Time t1(1,6,40);
	int s=t1;
	t1.display();
	cout<<"Time in sec = "<<s<<endl;
	double hr=t1;
	cout<<"Time in hr = "<<hr;
	return 0;
}