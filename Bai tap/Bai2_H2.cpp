#include<iostream>
#include<conio.h>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
     fstream filein,filein1;
    filein.open("input1.txt");
    filein1.open("input1_2.txt");
      int ds1[6][6];
      int canh=0;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            filein>>ds1[i][j];
            if(ds1[i][j]==1) canh++;
        }
    }
    filein1<<canh/2<<endl;
for(int i=0;i<6;i++)
{
    for(int j=0;j<6;j++)
    {
        if(ds1[i][j]==1)
        {
            ds1[j][i]=0;
            filein1<<i<<" "<<j<<endl;
        }
    }
}


filein.close();
filein1.close();
}