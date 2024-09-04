#include<iostream>
using namespace std;
class Time
{
	private:
		int hr,min,sec;
	public:
		void read()
		{
			cout<<"Enter time in hr, min & sec : ";
			cin>>hr>>min>>sec;
		}
		void show()
		{
			cout<<hr<<" : "<<min<<" : "<<sec<<endl;
		}
		friend Time operator +(Time &t1,Time &t2);
};
Time operator +(Time &t1,Time &t2)
{
	Time temp;
	temp.hr=t1.hr+t2.hr;
	temp.min=t1.min+t2.min;
	temp.sec=t1.sec+t2.sec;
	if(temp.sec>=60)
	{
		temp.min+=temp.sec/60;
		temp.sec=temp.sec%60;
	}
	if(temp.min>=60)
	{
		temp.hr+=temp.min/60;
		temp.min=temp.min%60;
	}
	return(temp);
}
int main()
{
	Time t1,t2,t3;
	cout<<"Enter 2 time : "<<endl;
	t1.read();
	t2.read();
	t1.show();
	t2.show();
	cout<<"Sum = ";
	t3=t1+t2;
	t3.show();
	return 0;
}
