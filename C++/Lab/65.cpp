#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Employee
{
	private:
		int eid;
		float sal;
		char name[100];
	public:
		void read()
		{
			cout<<"Enter eid, name & salary : "<<endl;
			cin>>eid>>name>>sal;
		}
		void display()
		{
			cout<<endl<<eid<<"\t"<<name<<"\t"<<sal;
		}
};
int main()
{
	fstream file;
	Employee e1,e2;
	char fname[100];
	int n;
	cout<<"Enter file name : ";
	cin>>fname;
	file.open(fname,ios::out);
	if(file.fail())
	{
		cout<<"Error opening file";
		return 1;
	}
	cout<<"Enter no. of employee records : ";
	cin>>n;
	cout<<"Enter records for "<<n<<" employees : "<<endl;
	for(int i=1;i<=n;i++)
	{
		e1.read();
		file.write((char *)&e1,sizeof(e1));
	}
	cout<<endl<<n<<" records written to file \""<<fname<<"\" successfully."<<endl;
	file.close();
	cout<<endl<<"Reading records from file :"<<endl;
	file.open(fname,ios::in);
	if(file.fail())
	{
		cout<<"Error opening file";
		return 1;
	}
	cout<<endl<<"EID\tName\tSalary";
	while(file.read((char *)&e2,sizeof(e2)))
		e2.display();
	file.close();
	return 0;
}
