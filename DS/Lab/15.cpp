#include<iostream>
#include<algorithm>
#define MAX 52 
using namespace std;
struct Edge
{
    int src,dest,w;
};
struct Graph
{
    int V,E;
    Edge e[MAX];
};
bool compareEdges(Edge a,Edge b) 
{
    return(a.w<b.w);
}
int find(int p[],int i) 
{
    if(p[i]==-1)
        return(i);
    return(find(p,p[i]));
}
void unionSet(int p[],int x,int y)
{
    int xset=find(p,x);
    int yset=find(p,y);
    if(xset!=yset)
        p[xset]=yset;
}
void printMST(int e,Edge r[],char v[])
{
	int MST=0;
	cout<<endl<<"--------------------"<<endl;
    cout<<"  Edges  |  Weight"<<endl;
    cout<<"--------------------"<<endl;
    for(int i=0;i<e;i++)
    {
    	cout<<"  "<<v[r[i].src]<<" - "<<v[r[i].dest]<<"  |    "<<r[i].w<<endl;
    	MST+=r[i].w;
	}
    cout<<"--------------------"<<endl;
    cout<<endl<<"Minimum Spanning Tree = "<<MST;
}
void kruskalMST(Graph &g,char v[])
{
    Edge result[MAX],temp;
    int p[MAX];
    int e=0; 
    for(int i=0;i<g.E;i++)
        for(int j=i+1;j<g.E;j++)
            if(g.e[j].w<g.e[i].w) 
            {
            	temp=g.e[i];
            	g.e[i]=g.e[j];
            	g.e[j]=temp;
			}
    for(int i=0;i<MAX;i++)
    	p[i]=-1;
    int i=0;
    while(e<g.V-1)
	{
        Edge nextEdge=g.e[i++];
        int x=find(p,nextEdge.src);
        int y=find(p,nextEdge.dest);
        if(x!=y)
		{
            result[e++]=nextEdge;
            unionSet(p,x,y);
        }
    }
	printMST(e,result,v);
}
int main() {
    int V, E;
    cout<<"Enter no. of vertices: ";
    cin>>V;
    char v[MAX];
    cout<<"Enter "<<V<<" vertices: ";
    for(int i=0;i<V;i++)
        cin>>v[i];
    cout<<"Enter no. of edges : ";
    cin>>E;
    Graph g;
    g.V=V;
    g.E=E;
    cout<<endl<<"Enter "<<E<<" edges (source, destination, weight) :"<<endl;
    for(int i=0;i<E;i++) 
	{
        char srcChar,destChar;
        int w;
        cin>>srcChar>>destChar>>w;
		int src=find(v,v+V,srcChar)-v;
        int dest=find(v,v+V,destChar)-v;
        g.e[i]={src,dest,w};
    }
    kruskalMST(g,v);
    return 0;
}
