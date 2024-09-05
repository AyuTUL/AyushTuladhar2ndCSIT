#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file1;
	ofstream file2;
	char ch;
	char source[100],dest[100];
	cout<<"Enter source file path : ";
	cin>>source;
	cout<<"Enter destination file path : ";
	cin>>dest;
	file1.open(source);
	file2.open(dest);
	if(file1.fail() || file2.fail())
	{
		cout<<"Error opening file";
		return 1;
	}
	while(file1.get(ch))
		file2.put(ch);
	file1.close();
	file2.close();
	cout<<"File has been copied";
	return 0;
}
