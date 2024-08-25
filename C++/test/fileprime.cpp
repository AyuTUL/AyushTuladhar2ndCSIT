#include<iostream>
#include<fstream>
#define N 10
using namespace std;
bool isPrime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
		if(n%i==0)
			break;
	if(i>n/2)
		return(true);
	else
		return(false);
}
int main()
{
	fstream file;
	int x[N],arr[N]={5,91,13,71,6,3,31,22,90,10};
	file.open("C:\\Users\\Students\\Documents\\AyushTuladhar2ndCSIT\\C++\\test\\numbers.txt",ios::in|ios::out|ios::trunc);
	if(file.fail())
	{
		cout<<"File not created";
		return 1;
	}
	file.write((char *)&arr,sizeof(arr));
	cout<<"Numbers written to file succesfully";
	file.seekg(0,ios::beg);
	file.read((char *)&x,sizeof(x));
	cout<<endl<<"Prime Numbers : "<<endl;
	for(int i=0;i<N;i++)
		if(isPrime(x[i]))
			cout<<x[i]<<"\t";
	file.close();
	return 0;
}