#include<iostream>
using namespace std;
class money
{
	private:
		int Rs,paisa;
	public:
		money()
		{
			Rs=paisa=0;
		}
		money(int r,int p)
		{
			Rs=r;
			paisa=p;
		}
		void display()
		{
			cout<<Rs<<"Rs"<<" "<<paisa<<"paisa"<<endl;
		}
		friend money operator +(money m1, money m2)
		{
			money temp;
			temp.paisa=m1.paisa+m2.paisa;
			temp.Rs=m1.Rs+m2.Rs+temp.paisa/100;
			temp.paisa=temp.paisa%100;
			return temp;
		}
};
int main()
{
	money m1(21,33);
	money m2(33,99);
	money m3;
	m3=m1+m2;
	m3.display();
	return 0;
}