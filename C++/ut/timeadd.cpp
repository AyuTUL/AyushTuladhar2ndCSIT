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
//		Time(int h){
//			hr=h;
//			min=sec=0;
//		}
//		Time(int h,int m,int s){
//			hr=h;
//			min=m;
//			sec=s;
//		}
		Time addTime(Time t)
		{
			Time temp;
			temp.hr=hr+t.hr;
			temp.min=min+t.min;
			temp.sec=sec+t.sec;
			while(temp.sec>=60)
			{
				temp.min+=1;
				temp.sec-=60;
				
			}
			while(temp.min>=60)
			{
				temp.hr+=1;
				temp.min-=60;
			}
			return temp;
		}
		void display()
		{
			cout<<hr<<":"<<min<<":"<<sec<<endl;
		}
		void read()
		{
			cout<<"Enter time: (hr:min:sec)"<<endl;
			cin>>hr>>min>>sec;
			
		}
};
int main()
{
	Time t1;
	
	t1.read();
	Time t2;
	t2.read();
	
	
	Time t3=t1.addTime(t2);
	t3.display();
}