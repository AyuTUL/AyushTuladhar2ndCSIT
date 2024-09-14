#include<iostream>
using namespace std;
class Room
{
	public:
		double length,breadth;
		double getArea()
		{
			return(length*breadth);
		}
		Room(double l,double b)
		{
			length=l;
			breadth=b;
		}
		void output()
		{
			cout<<"Length = "<<length<<endl<<"Breadth = "<<breadth<<endl;
			cout<<"Area = "<<getArea()<<endl;
		}
};
class MyRoom: public Room
{
	private:
		double height;
	public:
		double getVolume()
		{
			return(getArea()*height);
		}
		MyRoom(double l,double b,double h): Room(l,b)
		{
			height=h;	
		}
		void output()
		{
			cout<<"Height = "<<height<<endl;
			Room::output();
			cout<<"Volume = "<<getVolume()<<endl;
		}
};
int main()
{
	MyRoom r1(3.141,20.66,9.69), r2(4.22,4.65,4.21);
	cout<<"For Room 1 :"<<endl;
	r1.output();
	cout<<endl<<"For Room 2 :"<<endl;
	r2.output();
	return 0;
}
