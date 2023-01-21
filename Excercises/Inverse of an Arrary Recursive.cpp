//#include<bits/std++.h>
#include<iostream>
using namespace std;

int index(int arr[],int n,int key)
{ 
  int i;
  for(i=0;i<n;i++){if(arr[i]==key){break;}} 
  return i;
}

void rec(int arr[],int a[],int n,int s)
{ int i=index(arr,n,s);
  if(s<n){a[s]=i;rec(arr,a,n,s+1);} 
}

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
   int n,s=0;
  cin>>n;
  int arr[n],a[n];
  for(int i=0;i<n;i++){cin>>arr[i];
a[i]=arr[i];}
  rec(arr,a,n,s);
  for(int i=0;i<n;i++){cout<<a[i]<<" ";}
  return 0;
 }