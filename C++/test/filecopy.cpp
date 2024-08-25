#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fin;
	ofstream fout;
	char ch;
	fin.open("C:\\Users\\Students\\Documents\\AyushTuladhar2ndCSIT\\C++\\test\\file1.txt");
	fout.open("C:\\Users\\Students\\Documents\\AyushTuladhar2ndCSIT\\C++\\test\\file2.txt");
	while(fin.get(ch))
		fout.put(ch);
	fin.close();
	fout.close();
	cout<<"File has been copied";
	return 0;
}