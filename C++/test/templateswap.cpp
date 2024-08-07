#include<iostream>
using namespace std;
template<class T>
void swapf(T &a,T &b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a1=1,b1=2;
	cout<<"Swapping integer : "<<endl;
	swapf(a1,b1);
	cout<<"A = "<<a1<<endl<<"B = "<<b1<<endl;
	double a2=1.1,b2=2.2;
	cout<<"Swapping double : "<<endl;
	swapf(a2,b2);
	cout<<"A = "<<a2<<endl<<"B = "<<b2<<endl;
	char a3='a',b3='b';
	cout<<"Swapping character : "<<endl;
	swapf(a3,b3);
	cout<<"A = "<<a3<<endl<<"B = "<<b3<<endl;
	return 0;
}
