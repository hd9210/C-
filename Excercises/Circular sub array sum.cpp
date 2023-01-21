#include<iostream>
#include<climits>
using namespace std;


int maxsum(int arr[],int n)
{ int m=INT_MIN,sum=0,csum;
  for(int i=0;i<n;i++)
  { 
    for(int j=0;j<n;j++)
        {
          if(arr[(i+j)%n]+sum>=0)
            {sum=arr[(i+j)%n]+sum;csum=sum;}
          else{sum=0;}
        } if(m<csum){m=csum;} 
       
        sum=0;
  }

  return m;
}

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t,n;
  cin>>t;
  while(t--)
  {
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<maxsum(arr,n)<<endl;
  
  }
  
  return 0;
}