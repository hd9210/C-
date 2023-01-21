//#include<bits/std++.h>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  long long int n1,n2,r,cd,t;
  cin>>n1>>n2;
  if(n1<n2){t=n2;n2=n1;n1=t;}

  while(1){


  
  if(n1%n2==0){cout<<n2;break;}
  else{t=n1%n2;n1=n2;n2=t;}

  }
  
return 0;}