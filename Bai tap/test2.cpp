#include<iostream>
#include<fstream>
using namespace std;
int n,a[100][100];
const char fin[] = "input1_1.txt";
const char fon[] = "output1_1.txt";
ifstream fi;
ofstream fo;
/********************************* Open FIle Read *****************************/
void OpenFileRead(){
fi.open(fin, ios::in);
if(!fi){
cout<<"loi mo tep!";
exit(0);
}
}
/********************************* Open FIle Write ****************************/
void OpenFileWrite(){
fo.open(fon, ios::out);
if(!fo){
cout<<"loi mo tep!";
exit(0);
}
}
/****************************** Load Data ***********************************/
void Load(){
OpenFileRead();
char ch;
fi>>n;
do{
fi.get(ch);
}while(ch!=10);
int k=0,i=0;
while(i!=n){
fi.get(ch);
if(ch!=10)
    if(ch!=32) k=k*10+int(ch)-48;
    else
    {
        if(k>n||k<0) exit;
        a[i][k]=1;
        k=0;
    }
else
{
    if(k>n||k<0) exit;
        a[i][k]=1;
    k=0;
    i++;
}
}
fi.close();
}
/******************************* Convert ************************************/
void Convert(){
OpenFileWrite();
fo<<n<<endl;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++) fo<<a[i][j]<<" ";
fo<<endl;
}
fo.close();
}
/******************************** Main *************************************/
int main(){
Load();
Convert();
}