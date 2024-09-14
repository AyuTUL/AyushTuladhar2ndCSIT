#include<iostream>
using namespace std;
class Box
{
	private:
		double width,height,depth;
	public:
		double getArea()
		{
			return(2*(width*height+height*depth+width*depth));
		}
		double getVolume()
		{
			return(width*height*depth);
		}
		Box()
		{
			width=height=depth=0;
		}
		Box(double w,double h,double d)
		{
			width=w;
			height=h;
			depth=d;
		}
		void display()
		{
			cout<<"Width = "<<width<<endl<<"Height = "<<height<<endl<<"Depth = "<<depth<<endl;
			cout<<"Area = "<<getArea()<<endl;
			cout<<"Volume = "<<getVolume();
		}
};
int main()
{
	Box b(3.15,6.69,20.1134);
	b.display();
	return 0;
}
