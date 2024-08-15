#include<iostream>
using namespace std;
template<class T1,class T2>
class Test
{
	private:
		T1 a;
		T2 b;
	public:
		Test(T1 a,T2 b)
		{
			this->a=a;
			this->b=b;
		}
		void show()
		{
			cout<<a<<endl<<b<<endl;
		}
};
int main()
{
	Test<int,char> t1(1,'B');
	t1.show();
	return 0;
}