#include<bits/std++.h>
using namespace std;
//#define int long long int
#define F first
#define S second
#define pb push_back

int brutesubsummax(int arr[],int n)
{ int max=0;

for(int i = 0 ;i<n;i++){ 
 for(int j =i;j<n;j++){
  int temp=0;
  for(int k =i;k<=j;k++){temp=temp+arr[k];}
    if(temp>max){max=temp;}
 }


}
return max;
}




int32_t main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  int arr[]={40 ,55, 60, 70};
  
  int N= sizeof(arr)/sizeof(int);
  
  int sum =brutesubsummax(arr,N);
  cout<<" Max sum is "<<sum;
}