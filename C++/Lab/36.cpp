#include<iostream>
using namespace std;
class Space
{
	private:
		int x,y,z;
	public:
		Space()
		{
			x=y=z=0;
		}
		Space(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<"( "<<x<<" , "<<y<<" , "<<z<<" )"<<endl;
		}
		void operator --()
		{
			--x;
			--y;
			--z;
		}
};
int main()
{
	Space s(3,-6,9);
	s.display();
	cout<<"After Decrement : "<<endl;
	--s;
	s.display();
	return 0;
}
