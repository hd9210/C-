#include<iostream>
#include<climits>
using namespace std;


int kedane(int arr[],int a)
{ int csum[a]={0},max=INT_MIN,sum=0;
 int i=0;
 while(i<a-1){ 
  
  if(sum>=0){sum=sum+arr[i];}
  else{sum=0;sum=arr[i];}
  i++;
  if(max<sum){max=sum;}
 }
return max;
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
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<kedane(arr,n); 
  return 0;
}