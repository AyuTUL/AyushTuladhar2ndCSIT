#include<iostream>
using namespace std;
#define N 3
class Employee
{
	private:
		char name[30];
		long int num;
	public:
		void getData()
		{
			cout<<"Enter employee number & name : ";
			cin>>num>>name;
		}
		void putData()
		{
			cout<<endl<<endl<<"Employee Number : "<<num<<endl;
			cout<<"Name : "<<name;
		}
};
int main()
{
	int i;
	Employee e[N];
	cout<<"Enter details of "<<N<<" employees :"<<endl;
	for(i=0;i<N;i++)
		e[i].getData();
	cout<<"Employee Details : ";
	for(i=0;i<N;i++)
		e[i].putData();
	return 0;
}