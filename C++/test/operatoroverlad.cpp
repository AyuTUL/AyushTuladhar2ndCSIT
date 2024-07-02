#include<iostream>
using namespace std;
class space
{
	private:
		int x,y,z;
	public:
		space()
		{
			z=x=y=0;
		}
		space (int a, int b, int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
		}
		void operator ++()
		{
			x++;
			y++;
			z++;
		}
		void operator --()
		{
			x--;
			y--;
			z--;
		}
		void operator -()
		{
			x=-
			x;
			y=-y;z=-z;
		}
};

int main()
{
	space s(7,2,1);
	s.display();
	++s;
	s.display();
	--s;
	s.display();
	-s;
	s.display();
	return 0;
}