#include<iostream>
using namespace std;
class Room
{
	private:
		int length,breadth;
	public:
		Room(int l,int b)
		{
			length=l;
			breadth=b;
		}
		void display();
};
void Room :: display()
{
	cout<<"Length = "<<length<<endl;
	cout<<"Breadth = "<<breadth<<endl;
}
int main()
{
	Room r1(10,8);
	r1.display();
	return 0;
}