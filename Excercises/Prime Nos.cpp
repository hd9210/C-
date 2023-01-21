#include<bits/std++.h>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,c,count=0;
  cin>>n;
  if(n<=1){cout<<"No Primes are available "<<endl;}
  else if(n==2){cout<<" Total no of Prime is "<<1<<endl;}
  else{
  for(int i=3;i<=n;i++)
   {
     for(int j=2;j<i;j++)
     {
     	if(i%j!=0){c=1;}
     	else{c=2;break;}
     }
     if(c==1){count++;cout<<i<<"\t";}
   }
   cout<<"\n Total no of Primes are "<<count+1<<endl;
     }
  
return 0;}