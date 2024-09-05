#include<iostream>
#define N 100
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	char ch,fname[N];
	cout<<"Enter file name : ";
	cin>>fname;
	file.open(fname);
	if(file.fail())
	{
		cout<<"Error opening file";
		return 1;
	}
	cout<<"Reading from file: "<<endl;
	while(file.get(ch))
		cout<<ch;
	file.close();
	return 0;
}
