#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    char a;
    int k=0;
    a = getch();

    cout<<a<<endl;
    k=k*10+int(a)-48;
    cout<<k+15;
}