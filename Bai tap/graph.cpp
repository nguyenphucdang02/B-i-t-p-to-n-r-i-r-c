// vo huong
#include<iostream>
#include<fstream>
#include<conio.h>
#include<vector>
using namespace std;

typedef struct Diem
{
    int canh=0;
    int dinh=0;
}diem;

class Graph
{
    private:
        diem data;
        int size=0;
        vector< vector<int> > x;
    public:
        Graph();
        void InputGraph(fstream&,Graph&);
        void ds_Ke(Graph);
        void ds_Canh(Graph);
        void displayGraph(Graph);
        void soDinh(Graph);
        void soCanh();
        void Bac(int,Graph);
};

Graph::Graph()
{

}

void Graph::InputGraph(fstream& filename,Graph& graph)
{
    filename>>graph.size;
    for(int i=0;i<graph.size;i++)
    {
        for(int j=0;j<graph.size;j++)
        {
           filename>> graph.x.at(i).at(j);
           if(graph.x.at(i).at(j)==1) graph.data.canh++;
        }
    }
    graph.data.canh=graph.data.canh/2;
}

void Graph::ds_Ke(Graph graph)
{
    for(int i=0;i<graph.size;i++)
    {
        cout<<i<<"| ";
        for(int j=0;j<graph.size;j++)
        {
            if(graph.x.at(i).at(j)==1)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}

void Graph::ds_Canh(Graph garph)
{
    for(int i=0;i<garph.size;i++)
    {
        for(int j=0;j<garph)
    }
}