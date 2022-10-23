#include<iostream>
#include<fstream>
using namespace std;
#define FI "input1_2.txt"
#define FO "output1_2.txt"
ifstream finp (FI);
ofstream fout (FO);
#define MAX 100
int i,j;


typedef struct EdgeTag
{
	int u, v;
} Edge;
typedef struct GraphTag4
{
	int m;
	Edge e[MAX];
	int a[MAX][MAX];
} Graph4;

void InputGraph(Graph4 &g)
{
	for (i=0;i<6;i++)
               for (j=0;j<6;j++)
			g.a[i][j]=0;
	finp >> g.m;
	for (i=0; i<g.m; i++)
	{
		finp >> g.e[i].u >> g.e[i].v;
		g.a[g.e[i].u][g.e[i].v]=1;
		g.a[g.e[i].v][g.e[i].u]=1;
		
	}
		
}

void OutputGraph(Graph4 g)
{
	for (i=0;i<6;i++)
	{  
		for (j=0;j<6;j++)
			fout<<g.a[i][j]<<" ";
		fout<<endl;
	}
}

int main()
{
	Graph4 g;
	InputGraph(g);
    OutputGraph(g);

	finp.close();
	fout.close();
}