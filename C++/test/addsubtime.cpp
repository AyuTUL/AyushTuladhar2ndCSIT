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
		void display()
		{
			cout<<hr<<" : "<<min<<" : "<<sec<<endl;
		}
		Time operator -(Time t);
		Time operator +(Time t);
};
int main()
{
	Time t1(4,20,30);
	Time t2(3,30,40);
	Time t3,t4;
	cout<<"Sum = ";
	t3=t1+t2;
	t3.display();
	cout<<"Difference = ";
	t4=t1-t2;
	t4.display();
	return 0;
}
Time Time::operator +(Time t)
{
	Time temp;
	temp.sec=sec+t.sec;
	temp.min=min+t.min;
	temp.hr=hr+t.hr;
	if(temp.sec>=60)
	{
		temp.min+=temp.sec/60;
		temp.sec%=60;
	}
	if(temp.min>=60)
	{
		temp.hr+=temp.min/60;
		temp.min%=60;
	}
	return(temp);
}
Time Time::operator -(Time t)
{
	Time temp;
	temp.sec=sec-t.sec;
	temp.min=min-t.min;
	temp.hr=hr-t.hr;
	if(temp.sec<0)
	{
		temp.sec+=60;
		temp.min--;
	}
	if(temp.min<0)
	{
		temp.min+=60;
		temp.hr--;
	}
	return(temp);
} 