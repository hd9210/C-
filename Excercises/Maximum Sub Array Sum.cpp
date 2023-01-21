//#include<bits/std++.h>
#include<iostream>
#include<climits>
using namespace std;


void subarray(int arr[],int n)
{  int m=INT_MIN;
  for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {  int sum =0;
     for(int k=i;k<=j;k++){sum=sum+arr[k];} 
     if(m<sum){m=sum;}
  }
}
cout<<"The maximum sub array sum is "<<m; 
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
  subarray(arr,n);
  return 0;
 }