#include<iostream>
using namespace std;
int main()
{
    bool p[4]={false,false,true,true};
    bool q[4]={false,true,false,true};
    cout<<"Propositional Logic Operations :"<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"|  p  |  q  |  ~ p  |  ~ q  |  p ^ q  |  p V q  |  p  => q  |  p <=> q  |  p XOR q  |"<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"|  "<<p[i]<<"  |  "<<q[i]<<"  |   "<<(1-p[i])<<"   |   "<<(1-q[i])<<"   |    "<<(p[i]&q[i])<<"    |    "<<(p[i]|q[i])<<"    |     "<<(!p[i]||q[i])<<"     |     "<<(p[i]==q[i])<<"     |     "<<(p[i]^q[i])<<"     |"<<endl;
    }
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    return 0;
}
