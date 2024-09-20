#include<iostream>
#include<limits.h>
#define MAX 52  
using namespace std;
int minKey(int key[],bool mstSet[],int V) 
{
    int min=INT_MAX,min_index;
    for(int v=0;v<V;v++)
	{
        if(!mstSet[v] && key[v]<min) 
		{
            min=key[v];
            min_index=v;
        }
    }
    return(min_index);
}
void printMST(int p[],int g[MAX][MAX],int V,char v[])
{
	int MST=0;
	cout<<endl<<"--------------------"<<endl;
    cout<<"  Edges  |  Weight"<<endl;
    cout<<"--------------------"<<endl;
    for(int i=1;i<V;i++)
    {
    	cout<<"  "<<v[p[i]]<<" - "<<v[i]<<"  |    "<<g[i][p[i]]<<endl;
    	MST+=g[i][p[i]];
	}
    cout<<"--------------------"<<endl;
    cout<<endl<<"Minimum Spanning Tree = "<<MST;
}
void primMST(int g[MAX][MAX], int V, char v[]) 
{
    int p[MAX];
    int key[MAX];
    bool mstSet[MAX]; 
    for (int i=0;i<V;i++) 
	{
        key[i]=INT_MAX; 
        mstSet[i]=false;
    }
    key[0]=0;
    p[0]=-1;
    for(int i=0;i<V-1;i++)
	{
        int u=minKey(key,mstSet,V);
        mstSet[u]=true;
        for(int v=0;v<V;v++)
            if(g[u][v] && !mstSet[v] && g[u][v]<key[v])
			{
                p[v]=u;
                key[v]=g[u][v];
            }
    }
    printMST(p,g,V,v);
}
int main() 
{
    int V;
    cout<<"Enter no. of vertices : ";
    cin>>V;
    char v[MAX];
    int g[MAX][MAX]={0};
    cout<<"Enter "<<V<<" vertices : ";
    for(int i=0;i<V;i++)
        cin>>v[i];
    cout<<endl<<"Enter the adjacency matrix : "<<endl;
    for(int i=0;i<V;i++)
        for(int j=0;j<V;j++)
            cin>>g[i][j];
    primMST(g,V,v);
    return 0;
}
