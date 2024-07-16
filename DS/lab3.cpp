//Lab 3: Implementation of Propositional Logic Operation
#include<cstdlib>
#include<iostream>
using namespace std;
void conjunction(bool op1 ,bool op2)
{ 
	if(op1==true && op2 ==true)
		cout<<"   T    |";
	else
		cout<<"   F    |";
}
void disjunction(bool op1 ,bool op2)
{ 
	if(op1==false && op2 ==false)
		cout<<"   T    |";
	else
		cout<<"   F    |";
}
void negation(bool op1)
{ 
	if(op1==false)
		cout<<"  T  |";
	else
		cout<<"  F  |";
}
void implication(bool op1 ,bool op2)
{ 
	if(op1==true && op2 ==false)
		cout<<"    F    |";
	else
		cout<<"    T    |";
}
void biimplication(bool op1 ,bool op2)
{ 
	if((op1==true && op2 ==true|| (op1==false && op2 ==false)))
		cout<<"    T     |";
	else
		cout<<"    F     |";
}
int main()
{
	char c;
	int ch;
	do
	{
		system("cls");
		cout<<"Propositional Logic Operations:\n1. Conjunction (^)\n2. Disjunction (v)\n3. Negation (~)\n4. Implication (=>)\n5. Bi-Implication (<=>)\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			
			case 1:
				cout<<endl<<"Truth Table of Conjunction :"<<endl;
				cout<<endl<<"|  p  |  q  |  p ^ q  |"<<endl;	
				cout<<"|  T  |  T  | ";
				conjunction(true ,true);
				cout<<"\n|  T  |  F  | ";
				conjunction(true ,false);
				cout<<"\n|  F  |  T  | ";
			 	conjunction(false ,true);
				cout<<"\n|  F  |  F  | ";
				conjunction(false ,false);
		  		break;
		  	case 2:
		  		cout<<endl<<"Truth Table of Disjunction :"<<endl;
				cout<<endl<<"|  p  |  q  |  p v q  |"<<endl;	
				cout<<"|  T  |  T  | ";
				disjunction(true ,true);
				cout<<"\n|  T  |  F  | ";
				disjunction(true ,false);
				cout<<"\n|  F  |  T  | ";
			 	disjunction(false ,true);
				cout<<"\n|  F  |  F  | ";
				disjunction(false ,false);
		  		break;
			case 3:
				cout<<endl<<"Truth Table of Negation :"<<endl;
				cout<<endl<<"|  p  |  ~p  |"<<endl;	
			  	cout<<"|  T  | " ;
				negation(true);
				cout<<"\n|  F  | " ;
				negation(false);
				break;
		    case 4:
		    	cout<<endl<<"Truth Table of Implication :"<<endl;
				cout<<endl<<"|  p  |  q  |  p => q  |"<<endl;	
				cout<<"|  T  |  T  | ";
				implication(true ,true);
				cout<<"\n|  T  |  F  | ";
				implication(true ,false);
				cout<<"\n|  F  |  T  | ";
			 	implication(false ,true);
				cout<<"\n|  F  |  F  | ";
				implication(false ,false);
		  		break;
			case 5:
				cout<<endl<<"Truth Table of Bi-Implication :"<<endl;
				cout<<endl<<"|  p  |  q  |  p <=> q  |"<<endl;	
				cout<<"|  T  |  T  | ";
				biimplication(true ,true);
				cout<<"\n|  T  |  F  | ";
				biimplication(true ,false);
				cout<<"\n|  F  |  T  | ";
			 	biimplication(false ,true);
				cout<<"\n|  F  |  F  | ";
				biimplication(false ,false);
		  		break;
		    default :
				cout<<"Invalid input.";
				break;
		}
	cout<<endl<<endl<<"Do you want to continue? (Y/N) : ";
	cin>>c;
	}while(c=='Y' || c=='y');
	return 0;
}