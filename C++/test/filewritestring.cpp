#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	char ch;
	fout.open("C:\\Users\\Students\\Documents\\AyushTuladhar2ndCSIT\\C++\\test\\file1.txt");
	if(!fout)
	{
		cout<<"Error opening file";
		return 1;
	}
	cout<<"Enter line of text : ";
	while(1)
	{
		ch=getchar();
		if(ch=='\n')
			break;
		fout.put(ch);
	}
	fout.close();
	cout<<"Message written to file";
	return 0;
}
