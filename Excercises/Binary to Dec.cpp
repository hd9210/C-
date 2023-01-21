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
  int r,num=0,i=0;
  cin>>n;
  while(n){r=n%10;num=num+r*pow(2,i);i++;n=n/10;}
      cout<<num;
return 0;}