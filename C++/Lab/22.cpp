#include<iostream>
using namespace std;
class Student
{
	private:
		int rollno,marks;
		string name;
	public:
		void read()
		{
			cout<<"Enter roll no., name & marks : ";
			cin>>rollno>>name>>marks;
		}
		void show()
		{
			cout<<endl<<endl<<"Roll No. : "<<rollno<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Marks : "<<marks;
		}
};
int main()
{
	Student s1,s2,s3;
	cout<<"Enter details of 3 students : "<<endl;
	s1.read();
	s2.read();
	s3.read();
	cout<<"Stundent Details : ";
	s1.show();
	s2.show();
	s3.show();
	return 0;
}