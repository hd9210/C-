//#include<bits/std++.h>
#include<iostream>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,i=0,d=0,r;
  long long int t,old;

  cin>>n;
    if(n==1){cout<<"true";exit(1);}
  r=n;
  cin>>t;
  old=t;
  n=n-2;

  do{ cin>>t;
      if(old>t){d++;old=t;}
      else if(old==t&&t<0){d=-2000;old=t;}
      else{d=-1000;old=t;}
  }while(n--);
   cout<<d<<" "<<i<<endl;
  if(d==r-1){cout<<"true";}
  else if(d==-1000){cout<<"true";}
  else{cout<<"false";}  
return 0;}