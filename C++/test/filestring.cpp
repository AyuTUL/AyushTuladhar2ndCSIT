//write string to file and display only last 10 characters
#include<iostream>
#include<conio.h>
using namespace std;
#include<fstream>
#include<string.h>
int main()
{
	char str[]={"abcdefghijklmnopqrstuvqxyz"},ch;
	fstream file;
	int i,len=strlen(str);
	file.open("C:\\Users\\Students\\Documents\\AyushTuladhar2ndCSIT\\C++\\test\\file1.txt",ios::in|ios::out|ios::trunc);
	if(file.fail())
	{
		cout<<"File not created for some reason"<<endl;
		return 1;
	}
	cout<<"File created"<<endl;
	for(i=0;i<len;i++)
		file.put(str[i]);
	cout<<"String written to file"<<endl;
	file.seekg(-10,ios::end);
	cout<<"Reading from file"<<endl;
	getch();
	while(file.get(ch))
		cout<<(char)(ch-32);
	return 0;
}