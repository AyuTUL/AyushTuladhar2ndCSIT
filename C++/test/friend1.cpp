#include<iostream>
using namespace std;
class Sample
{
	private:
		int x,y;
	public:
		Sample(int a,int b)
		{
			x=a;
			y=b;
		}
		friend int larger(Sample s);
};
int larger(Sample s)
{
	if(s.x>s.y)
		return(s.x);
	else
		return(s.y);
}
int main()
{
	Sample s(100,200);
	int max=larger(s);
	cout<<"Max = "<<max;
	return 0;
}