#include<iostream>
#include<fstream>
using namespace std;
class Student
{
	private:
		int roll,marks;
		char name[30],address[30];
	public:
		void show()
		{
			cout<<"Roll No. : "<<roll<<endl<<"Name : "<<name<<endl<<"Address : "<<address<<"Marks : "<<marks;
		}
};
int main()
{
	Student s;
	ifstream fin;
	fin.open("C:\\Users\\Students\\Documents\\AyushTuladhar2ndCSIT\\C++\\test\\record.txt");
	fin.read((char *)&s,sizeof(s));
	cout<<"Roll No\tName\tAddress\tMarks"<<endl;
	s.show();
	fin.close();
	return 0;
}