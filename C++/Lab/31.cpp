#include<iostream>
using namespace std;
class Lecture
{
	public:
		int ID;
		string name;
		void readData()
		{
			cout<<"Enter ID & name : ";
			cin>>ID>>name;
		}
		void printData()
		{
			cout<<"ID : "<<ID<<endl<<"Name : "<<name<<endl;
		}
		
};
class PartTime: public Lecture
{
	private:
		float payperhr;
	public:
		void readData()
		{
			Lecture::readData();
			cout<<"Enter pay / hour : ";
			cin>>payperhr;
		}
		void printData()
		{
			Lecture::printData();
			cout<<"Pay per hour : "<<payperhr<<endl;
		}
};
class FullTime: public Lecture
{
	private:
		float paypermonth;
	public:
		void readData()
		{
			Lecture::readData();
			cout<<"Enter pay / month : ";
			cin>>paypermonth;
		}	
		void printData()
		{
			Lecture::printData();
			cout<<"Pay per month : "<<paypermonth<<endl;
		}
};
int main()
{
	FullTime f;
	cout<<"Enter full-time lecture details : "<<endl;
	f.readData();
	PartTime p;
	cout<<endl<<"Enter part-time lecture details : "<<endl;
	p.readData();
	cout<<endl<<"Full-time lecture details:"<<endl;
	f.printData();
	cout<<endl<<"Part-time lecture details:"<<endl;
	p.printData();
	return 0;
}
