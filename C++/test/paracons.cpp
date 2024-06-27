#include<iostream>
using namespace std;
class Box
{
	private:
		int length,breadth,height;
	public:
		Box()
		{
			length=breadth=height=0;
		}
		Box(int l)
		{
			length=breadth=height=l;
		}	
		Box(int l,int b,int h)
		{
			length=l;
			breadth=b;
			height=h;
		}
		int area()
		{
			return(length*breadth);
		}
		int volume()
		{
			return(length*breadth*height);
		}
};
int main()
{
	Box b1,b2(10),b3(10,8,6);
	cout<<"Area of b1 = "<<b1.area()<<endl;
	cout<<"Volume of b2 = "<<b2.volume()<<endl;
	cout<<"Volume of b3 = "<<b3.volume()<<endl;
	return 0;
}