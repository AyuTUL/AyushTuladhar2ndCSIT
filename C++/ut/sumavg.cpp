#include<iostream>
using namespace std;
class Area
{
	private:
		int r,l,b;
	public:
		Area()
		{
			r=0;
		}
		Area(int rad)
		{
			l=rad;
			b=rad;
		}
		Area(int len,int bre)
		{
			l=len;
			b=bre;
		}
		void area()
		{
			int area;
			area=l*b;
			cout<<"Area"<<area;
		}
};
int main()
{
	Area a1(5),a2(5,3),a3;
	a1.area();
	a2.area();
	a3.area();
	return 0;
}