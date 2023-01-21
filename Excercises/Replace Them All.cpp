//#include<bits/std++.h>
#include<iostream>
#include<cmath>
using namespace std;

void rep(long long int n)
{
  long long int ind=0;int i=0;
  if(n==0){ind=5;}
  while(n)
    { 
      if(n%10==0){ind =ind +5*pow(10,i)+1e-9;}
      else{ind =ind +(n%10)*pow(10,i)+1e-9;}
      n=n/10;
      i++;
    } cout<<ind<<endl;
  
}

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  long long int n;
  cin>>n;
  rep(n);
  return 0;
 }