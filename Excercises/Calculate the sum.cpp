#include<iostream>
using namespace std;


void csum(long long int arr[],int n,int s)
{ 
  long long int c[n]={0};
  s=s%n; 
  if(s<0){s=n+s;}
  for(int i=0;i<n;i++)
  { 
    if(i-s<0){c[i]=arr[i]+arr[n-(s-i)];}
    else if(i-s>=0){c[i]=arr[i]+arr[i-s];}
  } 
  for(int i =0;i<n;i++){arr[i]=c[i];}

}

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  long int q;
  cin>>n;
  long long int arr[n],sum=0;
  for(int i=0;i<n;i++){cin>>arr[i];}
  cin>>q;
  while(q--)
  { int i ;
    cin>>i;
    csum(arr,n,i);
  } 
  for(int i=0;i<n;i++){sum=sum+arr[i];}
  cout<<(sum%(1000000007));
  return 0;
 }