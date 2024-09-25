#include<stdlib.h>
#include<iostream>
using namespace std;			
char con(bool op1,bool op2)
{
	return((op1 && op2)?'T':'F');
}
char dis(bool op1,bool op2)
{
	return((op1 || op2)?'T':'F');
}
char neg(bool op1)
{
	return((!op1)?'T':'F');
}
char imp(bool op1,bool op2)
{
	return((!op1 || op2)?'T':'F');
}
char biimp(bool op1,bool op2)
{
	return((op1==op2)?'T':'F');
}
void print(char(*opr)(bool,bool),string operation,string symbol)
{
	cout<<endl<<"Truth Table of "<<operation<<" :"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"|  p  |  q  |  "<<symbol<<"  |"<<endl;	
	cout<<"-----------------------"<<endl;
	cout<<"|  F  |  F  |    "<<opr(false,false)<<"    |"<<endl;
	cout<<"|  F  |  T  |    "<<opr(false,true)<<"    |"<<endl;
	cout<<"|  T  |  F  |    "<<opr(true,false)<<"    |"<<endl;
	cout<<"|  T  |  T  |    "<<opr(true,true)<<"    |"<<endl;
	cout<<"-----------------------";
}
void print(char(*opr)(bool),string operation)
{
	cout<<endl<<"Truth Table of "<<operation<<" :"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|  p  |  ~ p  |"<<endl;
	cout<<"---------------"<<endl;	
	cout<<"|  F  |   "<<opr(false)<<"   |"<<endl;
	cout<<"|  T  |   "<<opr(true)<<"   |"<<endl;
	cout<<"---------------";
}	
int main()
{
	char c;
	int ch;
	do
	{
		system("cls");
		cout<<"Propositional Logic Operations:\n1. Conjunction (^)\n2. Disjunction (v)\n3. Negation (~)\n4. Implication (=>)\n5. Bi-Implication (<=>)\n6. Exit\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				print(con,"Conjunction","p ^ q");
		  		break;
		  	case 2:
		  		print(dis,"Disjunction","p v q");
		  		break;
			case 3:
				print(neg,"Negation");
				break;
		    case 4:
		    	print(imp,"Implication","p =>q");
		  		break;
			case 5:
				print(biimp,"Bi-Implication","p<=>q");
		  		break;
		  	case 6:
		  		cout<<endl<<"End of Program";
		  		exit(0);
		    default :
				cout<<"Invalid input.";
		}
		cout<<endl<<endl<<"Do you want to continue? (Y/N) : ";
		cin>>c;
	}while(c=='Y' || c=='y');
	return 0;
}
