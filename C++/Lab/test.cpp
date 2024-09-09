#include<iostream>
#include<string.h>
using namespace std;

class String
{
	private:
		int length;
		char *name;
	public:
		// Default constructor
		String()
		{
			length = 1;
			name = new char[length + 1];
			strcpy(name, " ");
		}
		
		// Destructor
		~String()
		{
			cout  << "Deleted: " << name << endl;
			delete[] name;
		}
		
		// Parameterized constructor
		String( char *n)
		{
			length = strlen(n);
			name = new char[length + 1];
			strcpy(name, n);
		}



		// Join two strings
		String join(const String s)
		{
			String temp;
			temp.length = length + s.length;
			delete[] temp.name; // Free the default allocation
			temp.name = new char[temp.length + 2]; // Allocate memory for concatenated string
			strcpy(temp.name, name);
			strcat(temp.name, " ");
			strcat(temp.name, s.name);
			return temp;
		}
		
		// Display the string
		void display()
		{
			cout << name << endl;
		}
};

int main()
{
	String s1("Heung-Min");
	String s2("Son");
	String s3 = s1.join(s2);

	s1.display();
	s2.display();
	cout << "Concatenated String:" << endl;
	s3.display();

	return 0;
}

