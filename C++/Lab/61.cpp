#include<iostream>
#define N 100
#include<fstream>
using namespace std;
int main()
{
	ofstream file;
	char ch,fname[N];
	cout<<"Enter file name : ";
	cin>>fname;
	file.open(fname);
	if(file.fail())
	{
		cout<<"Error opening file";
		return 1;
	}
	cout<<"Enter lines of text (press Ctrl + Z to stop) : "<<endl;
	fflush(stdin);
	while(1)
	{
		ch=getchar();
		if(ch==EOF)
			break;
		file.put(ch);
	}
	file.close();
	cout<<endl<<"Message written to file \""<<fname<<"\'.";
	return 0;
}
