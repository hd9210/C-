//#include<bits/std++.h>
#include<iostream>
using namespace std;

int func(int a)
{ int sum=0;
  while(a){sum=sum+a%10;a=a/10;}
  return sum;
}
int boston(long long int n)
{  long long int num=n,sum=0;
    int len=0,flag;
    while(num){sum=sum+num%10;len++;num=num/10;}
    for(int i=1;i<=n;i++)
    {
      for(int j=2;j<=n;j++)
      {
          if(n%j==0){n=n/j;sum=sum-func(j);cout<<j<<endl;break;}
      }
    }


   if(sum==0){flag=1;}
   else{flag=-1;}
  return flag;
}

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

   long long int n;
   cin>>n;
   if(boston(n)==1){cout<<1<<endl; }
   else{cout<<0;}
   return 0;
 }