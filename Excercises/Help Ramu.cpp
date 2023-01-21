#include<iostream>
using namespace std;

int rides(int arr[],int n,int m,int c1,int c2,int c3,int c4)
{ 
 int x,y=0,sum=0,i=0;
 while(i<n)
  { 
    x = arr[i]*c1;
    sum=sum+min(x,c2);
    i++;
  }
  
  y=min(sum,c3);
  sum=0;

  while(i<n+m)
  { 
    x = arr[i]*c1;
    sum=sum+min(x,c2);
    i++;
  }

return min(c4,y+min(sum,c3));
}



int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t,c1,c2,c3,c4,n,m,a=0,b=0;
  cin>>t;
  while(t--){
  cin>>c1>>c2>>c3>>c4;
  cin>>n>>m;
  int arr[n+m]={0};
  for(int i=0;i<n+m;i++)
  {
    cin>>arr[i]; 
  }
  cout<<rides(arr,n,m,c1,c2,c3,c4)<<endl; 
   }
  return 0;
}