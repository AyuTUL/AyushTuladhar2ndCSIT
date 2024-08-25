#include<iostream>
#include<fstream>
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
	int x[100],s=0;
	file.open("C:\\Users\\Students\\Documents\\AyushTuladhar2ndCSIT\\C++\\test\\numbers.txt");
	if(file.fail())
	{
		cout<<"File not created";
		return 1;
	}
	file.seekg(0,ios::end);
	int pos=file.tellg();
	int n=pos/sizeof(int);
	cout<<"There are "<<n<<" numbers written to file."<<endl;
	file.seekg(0);
	file.read((char *)&x,sizeof(x));
	cout<<"Prime Numbers : "<<endl;
	for(int i=0;i<n;i++)
		if(isPrime(x[i]))
		{
			cout<<x[i]<<"\t";
			s+=x[i];
		}
	cout<<endl<<"Sum of prime numbers = "<<s;
	file.close();
	return 0;
}