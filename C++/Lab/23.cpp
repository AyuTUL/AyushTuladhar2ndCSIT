#include<iostream>
using namespace std;
#define N 3
class Distance
{
	private:
		int m,cm;
	public:
		void read()
		{
			cin>>m>>cm;
		}
		Distance calcAvg(Distance d[])
		{
			this->m=this->cm=0;
			for(int i=0;i<N;i++)
			{
				this->m+=d[i].m;
				this->cm+=d[i].cm;
			}
			this->cm+=this->m*100;
			this->cm/=N;
			if(this->cm>=100)
			{
				this->m=this->cm/100;
				this->cm=this->cm%100;
			}	
			return(*this);
		}
		void show()
		{
			cout<<m<<" m and "<<cm<<" cm";
		}
};
int main()
{
	Distance d[N],avg;
	cout<<"Enter distance in meters & centimeters : "<<endl;
	for(int i=0;i<N;i++)
	{
		cout<<"Enter distance "<<i+1<<" : ";
		d[i].read();
	}
	avg=avg.calcAvg(d);
	cout<<"Average Distance = ";
	avg.show();
	return 0;
}
