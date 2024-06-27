#include<iostream>
using namespace std;
class dist
{
	private:
		int feet,inch;
	public:
		dist()
		{
			inch=feet=0;
		}
		dist(int f,int i)
		{
			feet=f;
			inch=i;
		}
		dist(dist &d)
		{
			feet=d.feet;
			inch=d.inch;
		}
		void display()
		{
			cout<<feet<<"ft"<<inch<<"in"<<endl;
		}
};
int main()
{
	dist d1(12,8);
	dist d2(d1);
	d1.display();
	d2.display();
}