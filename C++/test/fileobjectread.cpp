//write object to file and read 3rd object from file
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#define N 5
using namespace std;
class Employee
{
	private:
		int eid,sal;
		string name;
	public:
		void read()
		{
			cout<<"Enter eid, name & salary : "<<endl;
			cin>>eid>>name>>sal;
		}
		void display()
		{
			cout<<"Eid : "<<eid<<endl<<"Name : "<<name<<endl<<"Salary : "<<sal<<endl;
		}
};
int main()
{
	fstream file;
	Employee e;
	file.open("C:\\Users\\Students\\Documents\\AyushTuladhar2ndCSIT\\C++\\test\\emp.rec",ios::in|ios::out|ios::trunc);
	if(file.fail())
	{
		cout<<"File not created for some reason";
		return 1;
	}
	cout<<"File created"<<endl;
	cout<<"Enter records for "<<N<<" employees : "<<endl;
	for(int i=1;i<=N;i++)
	{
		e.read();
		file.write((char *)&e,sizeof(e));
	}
	cout<<N<<" objects are written to file"<<endl;
	file.seekg(2*sizeof(e),ios::beg);
	file.read((char *)&e,sizeof(e));
	cout<<"Third object :"<<endl;
	e.display();
	return 0;
}