#include<iostream>
using namespace std;
class shape
{
	public:
		virtual int area()=0;
		void show()
		{
			cout<<"show base"<<endl;
		}
};
//here, area is pure virtual function

int main()
{
	shape s;
	s.show();
	return 0;	
}




