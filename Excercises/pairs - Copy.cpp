#include<bits/std++.h>
using namespace std;
//#define int long long int
#define F first
#define S second
#define pb push_back

int subset(int arr[],int n)
{ int c=0;
 for(int i = 0 ;i<n;i++){

  for(int j=i+1;j<n;j++)
  {
    cout<<"("<<arr[i]<<","<<arr[j]<<")"<<"\t";
    c++;
  }
 }
    return c;
}




int32_t main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  int arr[]={40 ,55, 60, 70};
  int N= sizeof(arr)/sizeof(int);
  
  int pair = subset(arr,N);
  cout<<"Total pairs are "<<pair;

}