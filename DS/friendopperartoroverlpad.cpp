#include<iostream>
using namespace std;
class space
{
	private:
		int x,y,z;
	public:
		space()
		{
			x=y=z=0;
		}
	space(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	void display()
	{
		cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
	}
	friend void operator ++(space &s)
	{
		++s.x;
		++s.y;
		++s.z;
	}
	friend void operator -(space &s);
};
void operator -(space &s)
{
	s.x=-s.x;
	s.y=-s.y;
	s.z=-s.z;
}
int main()
{
	space s(12,23,45);
	++s;
	-s;
	s.display();
	return 0;
}