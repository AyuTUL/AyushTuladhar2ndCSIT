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
		Time add(Time t)
		{
			Time temp;
			temp.hr=hr+t.hr;
			temp.min=min+t.min;
			temp.sec=sec+t.sec;
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
		void display()
		{
			cout<<hr<<" : "<<min<<" : "<<sec<<endl;
		}
};
int main()
{
	Time t1(1,40,50),t2(2,40,50),t3(0,0,0);
	t1.display();
	t2.display();
	t3=t1.add(t2);
	cout<<"Sum = ";
	t3.display();
	return 0;
}
