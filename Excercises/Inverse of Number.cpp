#include<bits/std++.h>
#include<cmath>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,r;
  float num=0.0;
  cin>>n;
 
  float i=1.0f;
  while(n!=0)
    {r=n%10;
    
    num=num + i*pow(10.0,double(r-1));
    i=i+1;
    n=n/10;
     
  }
  cout<<num;
      
return 0;}