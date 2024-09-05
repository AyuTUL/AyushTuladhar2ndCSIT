#include<iostream>
#include<fstream>
#define N 100
using namespace std;
class Student
{
	private:
		int roll,marks;
		char name[30],add[30];
	public:
		void read()
		{
			cout<<"Enter roll, name, address & marks : "<<endl;
			cin>>roll>>name>>add>>marks;
		}
		void display()
		{
			cout<<"Roll No. : "<<roll<<endl<<"Name : "<<name<<endl<<"Address : "<<add<<endl<<"Marks : "<<marks<<endl;
		}
};
int main()
{
	Student s1,s2;
	fstream file;
	char fname[100];
	cout<<"Enter file name : ";
	cin>>fname;
	file.open(fname,ios::out);
	if(file.fail())
	{
		cout<<"Error opening file";
		return 1;
	}
	s1.read();
	file.write((char *)&s1,sizeof(s1));
	file.close();
	cout<<"Record inserted successfully."<<endl;
	file.close();
	cout<<endl<<"Reading from file :"<<endl;
	file.open(fname,ios::in);
	if(file.fail())
	{
		cout<<"Error opening file";
		return 1;
	}
	file.read((char *)&s2,sizeof(s2));
	s2.display();
	file.close();
	return 0;
}
