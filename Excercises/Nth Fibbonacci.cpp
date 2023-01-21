#include<bits/std++.h>
#include<cmath>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  int a=0,b=1,c;
  cin>>n;
  if(n==1){cout<<b<<endl;}
  else if(n==0){cout<<a<<endl;}
  else{while(n-2>=0){c=a+b;a=b;b=c;n--;} cout<<c;}

return 0;}