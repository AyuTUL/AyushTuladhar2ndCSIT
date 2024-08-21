#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class Student
{
	private:
		int roll, marks;
		string name,address;
	public:
		void read()
		{
			cout<<"Enter roll number, name, address and marks: "<<endl;
			cin>>roll>>name>>address>>marks; 
		}			
};
int main()
{
	Student s;
	ofstream fout;
	int n=3;
	fout.open("C:\\Users\\Students\\Desktop\\bla\\fuku.txt");
	cout<<"Enter records of "<<n<<" students"<<endl;
	for(int i=1;i<=n;i++)
	{
		s.read();
		fout.write((char *)&s,sizeof(s));
	}
}