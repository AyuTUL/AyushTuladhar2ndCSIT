#include<iostream>
using namespace std;
class Test
{
	private:
		static int count;
		int code ;
	public:
		Test()
		{
			count ++;
			code =0;
		}
		void setcode(int n)
		{
			code=n;
		}
		void display()
		{
			cout<<"code: "<<code<<endl;
			cout<<"count: "<<count<<endl;
		}
};

int Test::count = 0;

int main()
{
	Test t1;
	t1.display();
	Test t2;
	
	t2.display();
	Test t3,t4;
	t3.setcode(10);
	t3.display();
	t4.display();
	return 0;
}