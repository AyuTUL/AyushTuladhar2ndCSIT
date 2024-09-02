#include<iostream>
using namespace std;
class Student
{
	public:
		int roll;
		string name;
		Student(int r,string n)
		{
			roll=r;
			name=n;
		}
		void show()
		{
			cout<<"Roll No. : "<<roll<<endl<<"Name : "<<name<<endl;
		}
};
class ComputerScience: public Student
{
	private:
		double DS,OOP,IIT,DL;
	public:
		ComputerScience(int r,string n,double s1,double s2,double s3,double s4): Student(r,n)
		{
			DS=s1;
			OOP=s2;
			IIT=s3;
			DL=s4;
		}
		double getAvg()
		{
			return((DS+OOP+IIT+DL)/4.0);
		}
		void show()
		{
			Student::show();
			cout<<"DS : "<<DS<<endl<<"OOP : "<<OOP<<endl<<"IIT : "<<IIT<<endl<<"DL : "<<DL<<endl;
			cout<<"Average = "<<getAvg()<<endl;
		}
};
class Mathematics: public Student
{
	private:
		double MathI,MathII,StatI;
	public:
		Mathematics(int r,string n,double s1,double s2,double s3): Student(r,n)
		{
			MathI=s1;
			MathII=s2;
			StatI=s3;
		}
		double getAvg()
		{
			return((MathI+MathII+StatI)/3.0);
		}
		void show()
		{
			Student::show();
			cout<<"MATH I : "<<MathI<<endl<<"MATH II : "<<MathII<<endl<<"STAT I : "<<StatI<<endl;
			cout<<"Average = "<<getAvg()<<endl;
		}
};
int main()
{
	ComputerScience c(2,"Ayush Tuladhar",60.55,80,90.45,44);
	cout<<"Details of Computer Science student : "<<endl;
	c.show();
	Mathematics m(45,"Byush Uuladhar",78,90.53,66.69);
	cout<<endl<<"Details of Mathematics student : "<<endl;
	m.show();
	return 0;
}
