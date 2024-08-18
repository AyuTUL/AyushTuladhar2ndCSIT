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
			cout<<roll<<"\t"<<name<<"\t"<<address<<"\t"<<marks<<endl;
		}
};
int main()
{
	Student s;
	ifstream fin;
	fin.open("C:\\Users\\Students\\Documents\\AyushTuladhar2ndCSIT\\C++\\test\\record.txt");
	cout<<"Roll No\tName\tAddress\tMarks"<<endl;
	while(fin.read((char *)&s,sizeof(s)))
		   s.show();	
		fin.close();
	return 0;
}