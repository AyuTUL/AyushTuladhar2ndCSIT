#include<iostream>
using namespace std;
class Test
{
	private:
		static double PI;
		static int usd;
	public:
		Test()
		{	
			PI=3.1416;
			usd=133;
		}
		static void display()
		{
			cout<<"PI = "<<PI<<endl;
			cout<<"Dollar Rate = "<<usd;
		}
};
double Test::PI;
int Test::usd;
int main()
{
	Test t;
	Test::display();
	return 0;       
}