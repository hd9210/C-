#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;


void rosessum(int arr[],int a,int t)
{ sort(arr,arr+a);
int diff=INT_MAX,i=0,j=a-1,b,c;
while(i<j)
{
  if(arr[i]+arr[j]==t&&j-i<diff){b=i;c=j;i++;j--;diff=c-b;}
  else if(arr[i]+arr[j]>t){j--;}
  else{i++;}
}
cout<<"Deepak should buy roses whose prices are "<<arr[b]<<" and "<<arr[c]<<"."<<endl;
}



int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int a,t,m;
  cin>>t;
  while(t--){
  cin>>a;
  int arr[a];
  for(int i=0;i<a;i++)
  {
    cin>>arr[i];
  }
  cin>>m;
  rosessum(arr,a,m); }
  return 0;
}