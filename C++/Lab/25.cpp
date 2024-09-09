#include<math.h>
#include<iostream>
using namespace std;
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
		DB()
		{
			ft=in=0;
		}
		DB(int f,int i)
		{
			ft=f;
			in=i;
		}
		int getFeet()
		{
			return(ft);
		}
		int getInch()
		{
			return(in);
		}
		void show()
		{
			cout<<ft<<"' "<<in<<"\""<<endl;
		}
};
class DM
{
	private:
		int m,cm;
	public:
		DM()
		{
			m=cm=0;
		}
		void read()
		{
			cout<<"Enter distance in meters & centimeters : ";
			cin>>m>>cm;
		}
		int getMeter()
		{
			return(m);
		}
		int getCenti()
		{
			return(cm);
		}
		DM(DB d)
		{
			int totalCm=(d.getFeet()*12+d.getInch())*2.54;
			m=totalCm/100;
			cm=round(totalCm%100);
		}
		operator DB()
		{
			int ft,in;
			double totalCm=m*100+cm;
			double totalIn=totalCm/2.54;
			ft=floor(totalIn/12);
			in=round(((totalIn/12)-ft)*12);
			if(in>=12)
			{
				ft+=in/12;
				in=in%12;
			}
			return(DB(ft,in));
		}
		friend DM operator +(DM &d1,DM &d2);
		void show()
		{
			cout<<m<<" m and "<<cm<<" cm"<<endl;
		}
};
DM operator +(DM &d1,DM &d2)
{
	int totalCm=d1.m*100+d1.cm+d2.m*100+d2.cm;
	DM temp;
	temp.m=totalCm/100;
	temp.cm=totalCm%100;
	return(temp);
}
int main()
{
	DM mc1,mc2,sum1;
	DB fi,sum2;
	mc1.read();
	fi.read();
	mc2=fi;
	cout<<endl<<"Sum : "<<endl;
	sum1=mc1+mc2;
	sum1.show();
	sum2=sum1;
	sum2.show();
	return 0;
}
