#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
char ch=65;
int i,j,k,m;
for(i=0;i<=5;i++)
{

for(j=5;j>=i;j--)

{

cout<<" ";

}
for(k=1;k<=i;k++)
{
cout<<ch++;

}
ch--;
for(m=1;m<i;m++)
{cout<<--ch;}
cout<<endl;
ch=65;
}






}