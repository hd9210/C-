#include<iostream>
using namespace std;



 void waveprint(int arr[10][10],int m,int n)
 { 
    for(int i=0;i<m;i++)
    {
      
      for(int j=0;j<n;j++)
      {   if(i%2==0){cout<<arr[i][j]<<", ";}
          else{cout<<arr[i][n-j-1]<<", ";}
      } 
     
    }
    cout<<"END";
 }


int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int m,n;
  cin>>m>>n;
  int arr[10][10]={0};
  for(int i=0;i<m;i++)
    {
      
      for(int j=0;j<n;j++)
      {
          
          cin>>arr[i][j];
      } 
     
    }
  waveprint(arr,m,n); 
  return 0;
}