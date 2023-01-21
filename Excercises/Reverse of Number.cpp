#include<bits/std++.h>
#include<cmath>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  long long int r,n1,num=0.0;
  int i=1,len=0;
  cin>>n1;
  int n=n1;
  while(n!=0){len++;n=n/10;} 

  while(n1!=0)
    {          r=n1%10;
               num=num+r*(long long int)(pow(10,int(len-i))+1e-9);
               i++;
               n1=n1/10;

    } 
  
  cout<<num;
  
return 0;}