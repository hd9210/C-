#include<iostream>
using namespace std;

int trap(int arr[],int n)
{ int water=0;
  int l[n]={0},r[n]={0};
  int i=0,lmax,rmax;
  l[i]=arr[i]; lmax=arr[i];rmax=arr[n-1];
  r[n-1]=rmax;
  i++;
  while(i<n)
  {
     if(arr[i]<lmax){l[i]=lmax;} 
     else{  l[i]=lmax;
      lmax=arr[i];}
     if(arr[n-i-1]<rmax){r[n-i-1]=rmax;}
      else{  r[n-i-1]=rmax;
      rmax=arr[n-i-1];}
     i++;
  }

for(int i=0;i<n;i++)
{ 
   if(min(l[i],r[i])-arr[i]>=0)
   {water=water+min(l[i],r[i])-arr[i];}
}
return water;
}


int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t,n;
  cin>>t;
  while(t--){
  cin>>n;
  int arr[n]={0};
  for(int i=0;i<n;i++)
  {
    cin>>arr[i]; 
  }
  cout<<trap(arr,n)<<endl; 
   }
  return 0;
}