//#include<bits/std++.h>
#include<iostream>
#include<cmath>
using namespace std;

int num(long long int n,int a,int b)
{ long long int num=0;int i=0;
  if(a==10){num=n;}
  while(n&&a!=10){num=num+(n%10)*pow(a,i)+1e-9;n=n/10;i++;}
  i=0;
  n=num;
  num=0;
  if(b==10){num=n;}
  while(n&&b!=10){num=num+(n%b)*pow(10,i)+1e-9;n=n/b;i++;}
 return num;
}

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
   int a,b;
   long long int n;
   cin>>a>>b>>n;
   cout<<num(n,a,b);
   return 0;
 }