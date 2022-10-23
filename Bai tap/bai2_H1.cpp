#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
    fstream filein,filein1;
    filein.open("input1.txt");
    filein1.open("input1_1.txt");
    int ds1[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            filein>>ds1[i][j];
        }
    }
filein1<<6<<endl;
    for(int i=0;i<6;i++)
    {

        for(int j=0;j<6;j++)
        {
           if(ds1[i][j]==1){ 
            filein1<<j<<" ";
            }
        }
        filein1<<endl;
    }


filein.close();
filein1.close();
}