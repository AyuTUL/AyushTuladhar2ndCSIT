#include<iostream>
#include<fstream>
using namespace std;
class Student
{
	private:
		int roll,marks;
		char name[30],address[30];
	public:
		void read()
		{
			cout<<"Enter roll, name, address & marks : "<<endl;
			cin>>roll>>name>>address>>marks;
		}
};
int main()
{
	Student s;
	ofstream fout;
	int n;
	fout.open("C:\\Users\\Students\\Documents\\AyushTuladhar2ndCSIT\\C++\\test\\record.txt");
	cout<<"Enter records of how many students?";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		s.read();
			fout.write((char *)&s,sizeof(s));
		
	}

	fout.close();
	cout<<"Records inserted successfully"<<endl;
	return 0;
}