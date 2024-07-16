#include<iostream>
using namespace std;
class Student
{
	private:
		int roll_no;
		string name,address;
	public:
		void read()
		{
			cout<<"Enter roll no., name & address : "<<endl;
			cin>>roll_no>>name>>address;
		}
		void show()
		{
			cout<<"Roll No. : "<<roll_no<<endl<<"Name : "<<name<<endl<<"Address : "<<address<<endl;
		}
};
class Subject
{
	public:
		int ds,oop,math,st,mp;
		void read()
		{
			cout<<"Enter marks in DS, OOP, MATH, STAT & MP : "<<endl;
			cin>>ds>>oop>>math>>st>>mp;
		}
		void display()
		{
			cout<<"DS : "<<ds<<endl<<"OOP : "<<oop<<endl<<"MATH : "<<math<<endl<<"STAT : "<<st<<endl<<"MP : "<<mp<<endl;
		}
};
class Result: public Student,public Subject
{
	private:
		int total;
		float per;
	public:
		void computeResult()
		{
			total=ds+oop+math+st+mp;
			per=(float)total/5.0;
		}
		void read()
		{
			Student::read();
			Subject::read();
		}
		void display()
		{
			Student::show();
			Subject::display();
			cout<<"Total : "<<total<<endl<<"Percentage : "<<per;
		}
};
int main()
{
	Result r;
	r.read();
	r.computeResult();
	r.display();
	return 0;
}