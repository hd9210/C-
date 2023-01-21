#include<iostream>
#include<climits>
using namespace std;


int rosessum(int arr[],int a)
{ int csum[a]={0},max=INT_MIN,sum=0;
 csum[0]=arr[0];
 for(int i=1;i<a-1;i++){csum[i]=csum[i-1]+arr[i];}
 for(int i=1;i<a;i++)
  {for(int j=i;j<a;j++)
 {sum=csum[j]-csum[i-1];
  if(max<sum){max=sum;}
 } 
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
  cout<<rosessum(arr,n); 
  return 0;
}