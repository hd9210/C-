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

   long long int n,invert=0;
  int i=0,r;
  cin>>n;
  while(n)
    { r=n%10;
      if(r>9-r&&r!=9){invert =invert +(9-r)*pow(10,i)+1e-9;}
      else if(r==9&&(n/10)!=0){invert =invert +(9-r)*pow(10,i)+1e-9;}
      else{invert =invert +r*pow(10,i)+1e-9;}
      n=n/10;
    i++;
    }cout<<invert;
    
    return 0;
 }