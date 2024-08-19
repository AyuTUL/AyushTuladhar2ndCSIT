#include<iostream>
using namespace std;
inline double cube(double n)
{
	return(n*n*n);
}
int main()
{
	cout<<"Cube of length 5 = "<<cube(5)<<endl;
	cout<<"Cube of length 45.3 = "<<cube(45.3)<<endl;
	cout<<"Cube of length 31.11 = "<<cube(31.11)<<endl;
	cout<<"Cube of length 16.17 = "<<cube(16.17);
	return 0;
}
