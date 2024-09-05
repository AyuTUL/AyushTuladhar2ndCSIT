#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	char ch;
	fin.open("C:\\Users\\Students\\Documents\\AyushTuladhar2ndCSIT\\C++\\test\\file1\\.txt");
	cout<<"Reading from file: "<<endl;
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
	fin.close();
	return 0;
}
