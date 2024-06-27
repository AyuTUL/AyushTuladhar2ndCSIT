#include<iostream>
using namespace std;
int count=0;
class Alpha
{
	public:
		Alpha()
		{
			count++;
			cout<<"Object "<<count<<" created"<<endl;
		}
		~Alpha()
		{
			cout<<"Object "<<count<<" destroyed"<<endl;
			count--;
		}
};
int main()
{
	cout<<"Inside main"<<endl;
	Alpha a1,a2,a3;
	{
		cout<<"Inside a block"<<endl;
		Alpha a4,a5;
	}
	cout<<"Inside main again"<<endl;
	Alpha a6;
	cout<<"End of program"<<endl;
	return 0;
}