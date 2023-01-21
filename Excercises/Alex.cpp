#include<iostream>
using namespace std;


bool alex(int arr[],int n,int a,int k)
{ int c=0;
  for(int i=0;i<n;i++)
  {
    if(a%arr[i]==0){c++;}
  }
  if(c==k){return true;}
  else{return false;}
}

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,t,a,k;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cin>>t;
  while(t--)
  { cin>>a>>k;
    if(alex(arr,n,a,k)){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
  }
  return 0;
}