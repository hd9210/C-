#include<bits/std++.h>
using namespace std;
//#define int long long int
#define F first
#define S second
#define pb push_back

void reverse_array(int arr[],int start,int end)
{
while(start<end)
{
  int t;
  t=arr[start];
  arr[start]=arr[end];   // swap(arr[start],arr[end]); In Built Function
  arr[end]=t;
  start++,end--;
}

}




int32_t main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  int arr[]={40 ,55, 60, 70, 76 ,90, 100,110};
  int N= sizeof(arr)/sizeof(int);
  int start=0,end=N-1;
  reverse_array(arr,start,end);
  cout<<"Reversed array is "<<endl;
  for(int i=0;i<N;i++)
    { cout<<arr[i]<<"\t";}

}