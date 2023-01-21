#include<bits/std++.h>
using namespace std;
//#define int long long int
#define F first
#define S second
#define pb push_back
//prefixsums
int prefixsubsummax(int arr[],int n)
{ int prefix[n]={0};
  prefix[0]=arr[0];
 for(int i =1;i<n;i++){prefix[i]=prefix[i-1]+arr[i];}
  for(int x:prefix){cout<<x<<endl;}
 int m=0;


for(int i = 0 ;i<n;i++){ 
  int temp=0;
 for(int j =i;j<n;j++)
 {
   temp = i>0?prefix[j]-prefix[i-1]:prefix[j];
 }
 m = max(temp,m);
 }

return m;
}




int32_t main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  int arr[]={40 ,-30, 60, 70};
  
  int N= sizeof(arr)/sizeof(int);
  
  int sum =prefixsubsummax(arr,N);
  cout<<" Max sum is "<<sum;
}