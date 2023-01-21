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

  long long int n;
  cin>>n;
  if(n%2!=0&&n>2){
  cout<<(n*n/2)<<" "<<(n*n/2+1);} 
  else if(n%2==0&&n>2){
    cout<<(n*n/4-1) <<" "<<(n*n/4+1);}
  else{cout<<-1;}
  return 0;
 }