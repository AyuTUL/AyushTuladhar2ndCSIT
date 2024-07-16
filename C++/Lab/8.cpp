#include<iostream>
using namespace std;
inline double cube(double n)
{
	return(n*n*n);
}
int main()
{
	double n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"Cube of "<<n<<" = "<<cube(n);
	return 0;
}