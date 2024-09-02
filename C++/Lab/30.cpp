#include<iostream>
using namespace std;
class Box
{
	public:
		int length,breadth,height;
		void getVolume()
		{
			int vol=length*breadth*height;
			cout<<"Length = "<<length<<endl<<"Breadth = "<<breadth<<endl<<"Height = "<<height<<endl;
			cout<<"Volume = "<<vol<<endl;
		}
		Box(int l,int b,int h)
		{
			length=l;
			breadth=b;
			height=h;
		}
};
class BoxWeight: public Box
{
	public:
		double weight;
		void getWeight()
		{
			Box::getVolume();
			cout<<"Weight = "<<weight<<endl;
		}
		BoxWeight(int l,int b,int h,double w): Box(l,b,h)
		{
			weight=w;
		}
};
class Shipment: public BoxWeight
{
	private:
		double cost;
	public:
		void getCost()
		{
			BoxWeight::getWeight();
			cout<<"Cost = "<<cost;
		}
		Shipment(int l,int b,int h,double w,double c): BoxWeight(l,b,h,w)
		{
			cost=c;
		}
};
int main()
{
	Shipment s(5,3,6,80.69,150032.6312);
	s.getCost();
	return 0;
}
