//Implementation of Logical Operators

#include<conio.h>
#include<iostream>
using namespace std;
 
void conjunction(bool op1 ,bool op2)
{ 
	if(op1==true && op2 ==true)
		cout<<"T";
	else
		cout<<"F";
}
void disjunction(bool op1 ,bool op2)
{ 
	if(op1==false && op2 ==false)
		cout<<"F";
	else
		cout<<"T";
}
void negation(bool op1)
{ 
	if(op1==false)
		cout<<"T";
	else
		cout<<"F";
}
void implication(bool op1 ,bool op2)
{ 
	if(op1==true && op2 ==false)
		cout<<"F";
	else
		cout<<"T";
}
void biimplication(bool op1 ,bool op2)
{ 
	if((op1==true && op2 ==true|| (op1==false && op2 ==false)))
		cout<<"T";
	else
		cout<<"F";
}
int main()
{
int ch;
	cout<<"Enter your choice \n1. Conjunction (^)\n2. Disjunction (v)\n3. Negation (~)\n4. Implication (=>)\n5. Bi-Implication (<=>)\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<" T " <<" | " <<"T | ";
			conjunction(true ,true);
			cout<<"\n T " <<" | " <<"F | ";
			conjunction(true ,false);
			cout<<"\n F " <<" | " <<"T | ";
		 	conjunction(false ,true);
			cout<<"\n F " <<" | " <<"F | ";
			conjunction(false ,false);
	  		break;
	  	case 2:
			cout<<" T " <<" | " <<"T | ";
			disjunction(true ,true);
			cout<<"\n T " <<" | " <<"F | ";
			disjunction(true ,false);
			cout<<"\n F " <<" | " <<"T | ";
			disjunction(false ,true);
			cout<<"\n F " <<" | " <<"F | ";
			disjunction(false ,false);
			break;
		case 3:
		  	cout<<" T " <<" | " ;
			negation(true);
			cout<<"\n F " <<" | " ;
			negation(false);
			break;
	    case 4:
			cout<<" T " <<" | " <<"T | ";
			implication(true ,true);
			cout<<"\n T " <<" | " <<"F | ";
			implication(true ,false);
			cout<<"\n F " <<" | " <<"T | ";
			implication(false ,true);
			cout<<"\n F " <<" | " <<"F | ";
			implication(false ,false);
			break;
		case 5:
			cout<<" T " <<" | " <<"T | ";
			biimplication(true ,true);
			cout<<"\n T " <<" | " <<"F | ";
			biimplication(true ,false);
			cout<<"\n F " <<" | " <<"T | ";
			biimplication(false ,true);
			cout<<"\n F " <<" | " <<"F | ";
			biimplication(false ,false);
			break;
	    default :
			cout<<"invalid operation !!!!";
			break;
	}
return 0;
}