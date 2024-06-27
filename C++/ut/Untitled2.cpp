#include<iostream>
using namespace std;
class second;
class first
{
	private:
		int a;
	public:
		first(int x)
		{
			a=x;
		}
		friend int sum (first f,second s);
};
class second
{
	private: int b;
	public:
		second(int y)
		{
			b=y;
		}
		friend int sum (first f, second y);
};

int sum(first f, second s)
{
	return f.a+s.b;
}

int main()
{
	first f(10);
	second s(39);
	cout<<"sum: "<<sum(f,s);
	return 0;
}