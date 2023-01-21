#include<iostream>
#include<climits>
using namespace std;



 int minswap(int arr[],int n)
 {  int count =0;
    int min=INT_MAX;
    int t;
    for(int i=0;i<n;i++)
    {
      
      for(int j=i;j<n;j++)
      {
          if(arr[j]<min){min=arr[j];t=j;}
      } cout<<min<<endl;
      if(i!=t){
      swap(arr[i],arr[t]); count++;}
      min=INT_MAX;
    }

  return count;
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
  cout<<minswap(arr,n); 
  return 0;
}