#include<iostream>
#include<conio.h>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
   fstream filein,filein1;
   filein.open("input1_1.txt");
   filein1.open("output1_1.txt");
   int ds[6][6]={0};
   int dem=0;
   int gitr=0;
   int i=0;
   char a;
   filein>>dem;
   do{
      filein.get(a);
   }while(a!=10);
   while (filein.get(a))
   {
      int gitr=0;
      if(a!=10 && a!=32)
      {
         gitr=gitr*10+int(a)-48;
         ds[i][gitr]=1;
      }
      else if(a==10) i++;

   }

   filein1<<dem<<endl;

   for(int k=0;k<6;k++)
   {
      for(int l=0;l<6;l++)
      {
         filein1<<ds[k][l]<<" ";
      }
      filein1<<"\n";

   }
   for(int i=0;i<6;i++)
   {
      int deg=0;
      for(int j=0;j<6;j++)
      {
         if(ds[i][j]==1) deg++;
      }
      filein1<<"Deg("<<i+1<<")="<<deg<<endl;
   }
   filein.close();
   filein1.close();

}