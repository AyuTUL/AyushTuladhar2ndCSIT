#include<iostream>
using namespace std;
class Space
{
	private:
		int x,y,z;
	public:
		void read()
		{
			cout<<"Enter x,y & z component of 3-D vector : ";
			cin>>x>>y>>z;
		}
		void show()
		{
			cout<<"( "<<x<<" , "<<y<<" , "<<z<<" )"<<endl;
		}
		void operator-();
};
void Space::operator -()
		{
			x=-x;
			y=-y;
			z=-z;
		}
int main()
{
	Space s;
	s.read();
	s.show();
	cout<<"Negative vector :"<<endl;
	-s;
	s.show();
	return 0;
}
