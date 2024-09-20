#include<iostream>
#include<limits.h>
#define MAX 52  
using namespace std;
char source,srcIndex;
int minDistance(int d[],bool sptSet[],int V) 
{
    int min=INT_MAX,min_index=-1;
    for(int v=0;v<V;v++)
        if(!sptSet[v] && d[v]<=min) 
        {
        	min=d[v];
			min_index=v;
		}      
    return(min_index);
}
void print(int d[],int V,char v[]) 
{
	cout<<endl<<"-----------------------------------------"<<endl;
    cout<<"  Vertex  |  Distance from Source ( "<<source<<" )"<<endl;
    cout<<"-----------------------------------------"<<endl;
    for(int i=0;i<V;i++)
    	cout<<"    "<<v[i]<<"     |              "<<d[i]<<endl;
    cout<<"-----------------------------------------";
}
void dijkstra(int g[MAX][MAX],int src,int V,char v[]) 
{
    int d[MAX]; 
    bool sptSet[MAX];
    for(int i=0;i<V;i++)
    {
    	d[i]=INT_MAX;
		sptSet[i]=false;
	} 
    d[src]=0;
    for(int i=0;i<V-1;i++) 
	{
        int u=minDistance(d,sptSet,V);
        sptSet[u]=true;
        for(int v=0;v<V;v++)
            if(!sptSet[v] && g[u][v] && d[u] != INT_MAX && d[u]+g[u][v]<d[v]) 
                d[v]=d[u]+g[u][v];
    }
    print(d,V,v);
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
	cout<<endl<<"Enter adjacency matrix :"<<endl;
    for(int i=0;i<V;i++)
        for(int j=0;j<V;j++)
            cin>>g[i][j];
	cout<<endl<<"Enter source vertex : ";
	cin>>source;
    int srcIndex = -1;
    for(int i=0;i<V;i++) 
        if(v[i]==source) 
        {
            srcIndex=i;
            break;
        }
    if(srcIndex==-1) 
    {
        cout << "Invalid source vertex" << endl;
        return 1;
    }
    dijkstra(g,srcIndex,V,v);
    return 0;
}
