#include<iostream>
using namespace std;

int gcdExtended(int a, int b, int *x, int *y){
    if (a==0){
        *x=0;
        *y=1;
        return b;
    }
    int x1,y1;
    int gcd=gcdExtended(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    return gcd;
}


int main(){
    int x,y,a=32,b=24;
    int g=gcdExtended(a,b,&x,&y);
    cout<<("%d",g);
    cout<<x<<y;
    return 0;
    }
