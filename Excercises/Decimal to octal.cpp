#include<bits/std++.h>
#include<cmath>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  long long int n;
  int r,q,num=0,i=0;
  cin>>n;
  if(n<8){cout<<n;}
  else{
    do{
    r=n/8;q=n%8;num=num+q*pow(10,i);i++;n=r;}while(r>7); }
      cout<<num+r*pow(10,i);
return 0;}