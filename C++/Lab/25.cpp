//tbc
#include<iostream>
using namespace std;
class DM
{
	private:
		int m,cm;
	public:
		void read()
		{
			cout<<"Enter distance in meters & centimeters : ";
			cin>>m>>cm;
		}
		operator DB()
		{
			int ft,in;
			ft=
			in=
			return(DM(ft,in));
		}
		friend DM sum(DM d1,DM d2);
		void show()
		{
			cout<<m" m and "<<cm<" cm"<<endl;
		}
};
class DB
{
	private:
		int ft,in;
	public:
		void read()
		{
			cout<<"Enter distance in feet & inches : ";
			cin>>ft>>in;
		}
		friend DM sum(DM d1,DM d2);
		void show()
		{
			cout<<m" m and "<<cm<" cm"<<endl;
		}
};
