#include<iostream>
using namespace std;
class USMoney
{
	private:
		int dollar,cents;
	public:
		USMoney(int d,int c)
		{
			dollar=d;
			cents=c;
		}
		USMoney plus(USMoney m)
		{
			dollar+=m.dollar;
			cents+=m.cents;
			if(cents>99)
			{
				dollar+=cents/100;
				cents=cents%100;
			}
			return(*this);
		}
		void show()
		{
			cout<<char(36)<<dollar<<" and "<<cents<<char(155)<<endl;
		}
};
int main()
{
	USMoney x(5,80);
	USMoney y(1,90);
	x.show();
	y.show();
	USMoney sum=x.plus(y);
	cout<<"Sum = ";
	sum.show();
	return 0;
}
