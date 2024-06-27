#include<iostream>
using namespace std;
class Second;
class First
{
	private:
		int a;
	public:
		First(int x)
		{
			a=x;
		}	
		friend int sum(First f,Second s);
};
class Second
{
	private:
		int b;
	public:
		Second(int y)
		{
			b=y;
		}
		friend int sum(First f,Second s);
};
int sum(First f,Second s)
{
	return(f.a+s.b);
}
int main()
{
	First f(100);
	Second s(200);
	cout<<"Sum = "<<sum(f,s);
	return 0;
}