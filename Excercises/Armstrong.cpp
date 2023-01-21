//#include<bits/std++.h>
#include<iostream>
#include<cmath>
using namespace std;

int arm(long long int n)
{  long long int num=n;
   int r,flag,len=0;
   while(n){n=n/10;len++;}
   n=num;
   while(n){r=n%10;num=num-pow(r,len)+1e-9;n=n/10;}
   if(n==num){flag=1;}
   else{flag=-1;}
  return flag;
}

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  int a,b;
  cin>>a>>b;
  while(a<=b){
   if(arm(a)==1){cout<<a<<endl; }
   a++;}
  return 0;
 }