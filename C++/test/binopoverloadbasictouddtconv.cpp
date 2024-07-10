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
		Time(int h,int m,int s)
		{
			hr=h;
			min=m;
			sec=s;
		}
		Time(int s)
		{
			hr=s/3600;
			s=s%3600;
			min=s/60;
			sec=s%60;
		}
		Time operator +(Time t)
		{
			Time temp;
			temp.hr=hr+t.hr
			temp.min=min+t.min;
			temp.sec=sec+t.sec;
			return(temp);
		}
		void display()
		{
			cout<<hr<<" : "<<min<<" : "<<sec<<endl;
		}
};
int main()
{
	int h,m,s,sec;
	cout<<"Enter time in hour, min & sec :";
	cin>>h>>m>>s;
	cout<<"Enter time in seconds : ";
	cin>>sec;
	Time t(h,m,s);
	Time sum=t+sec;
	sum.display();
}