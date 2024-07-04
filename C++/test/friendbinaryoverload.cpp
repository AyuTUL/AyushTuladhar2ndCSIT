#include<iostream>
using namespace std;
class Money
{
	private:
		int rs,paisa;
	public:
		Money()
		{
			rs=paisa=0;
		}
		Money(int r,int p)
		{
			rs=r;
			paisa=p;
		}
		void display()
		{
			cout<<"Rs "<<rs<<" & "<<"Pa "<<paisa<<endl;
		}
		friend Money operator +(Money m1,Money m2)
		{
			Money temp;
			temp.rs=m1.rs+m2.rs;
			temp.paisa=m1.paisa+m2.paisa;
			if(temp.paisa>=100)
			{
				temp.rs++;
				temp.paisa-=100;
			}
			return(temp);
		}
};
int main()
{
	Money m1(10,80);
	Money m2(20,60);
	Money m3=m1+m2;
	m3.display();
	return 0;
}