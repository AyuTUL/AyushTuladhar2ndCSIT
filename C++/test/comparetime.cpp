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
		bool operator ==(Time t);
		bool operator <(Time t);
};
int main()
{
	Time t1(100,20,40);
	Time t2(100,20,40);
	if(t1==t2)
		cout<<"T1 & T2 are same";
	else if(t1<t2)
		cout<<"T1 is smaller than T2";
	else
		cout<<"T1 is greater than T2";
	return 0;
}
bool Time::operator <(Time t)
{
	int s1,s2;
	s1=sec+min*60+hr*3600;
	s2=t.sec+t.min*60+t.hr*3600;
	if(s1<s2)
		return true;
	else
		return false;
}
bool Time::operator ==(Time t)
{
	if(hr==t.hr && min==t.min && sec==t.sec)
		return true;
	else
		return  false;
}