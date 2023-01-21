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

  unsigned int n;
  int s1=0,s2=0,r;
  long long int c;
  cin>>n;
  while(n--)
    {
      cin>>c;
      while(c){
        r=c%10;
        if(r%2==0){s1=s1+r;}
        else{s2=s2+r;}
        c=c/10;}
      cout<<s1<<" "<<s2<<endl;
      if(s1%4==0&&s1>0){cout<<"Yes"<<endl;}
      else if(s2%3==0&&s2>0){cout<<"Yes"<<endl;}
      else{cout<<"No"<<endl;}
      s1=s2=0;
    }
    return 0;
 }