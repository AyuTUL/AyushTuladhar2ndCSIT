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
		Time operator +(Time t)
		{
			Time temp;
			int total,s;
			total=hr*3600+min*60+sec+t.hr*3600+t.min*60+t.sec;
			temp.hr=total/3600;
			s=total%3600;
			temp.min=s/60;
			temp.sec=s%60;
			return(temp);
		}
};
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
