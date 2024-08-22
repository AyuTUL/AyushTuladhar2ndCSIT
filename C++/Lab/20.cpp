#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
	public:
		Number()
		{
			x=y=0;
		}
		void read()
		{
			cout<<"Enter 2 integers : ";
			cin>>x>>y;
		}
		int getMax()
		{
			if(this->x>this->y)
				return(this->x);
			else
				return(this->y);
		}
};
int main()
{
	Number n;
	int lar;
	n.read();
	lar=n.getMax();
	cout<<"Larger Number = "<<lar;
	return 0;
}