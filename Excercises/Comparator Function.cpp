//#include<bits/std++.h>
#include<iostream>
#include<climits>
using namespace std;

bool max_find(int a,int b){return a<b;}

void max_no( int arr[],int s,bool myfunc(int,int))
{ int m=INT_MIN;
  for(int i=0;i<s;i++){if(myfunc(m,arr[i])){m=arr[i];}}
  cout<<m;
}

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){cin>>arr[i];}
    max_no(arr,n,max_find);
   return 0;
 }