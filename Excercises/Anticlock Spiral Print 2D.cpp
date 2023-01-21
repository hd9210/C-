#include<iostream>
using namespace std;



 void spiralprint(int arr[10][10],int m,int n)
 { int rs=0,cs=0,ce=n-1,re=m-1;
   while(rs<=re and cs<=ce){
    
    for(int i=rs;i<=re;i++){cout<<arr[i][cs]<<", ";}
    cs++;
    
    for(int i=cs;i<=ce;i++){cout<<arr[re][i]<<", ";}
    re--;
    if(cs<=ce){
    for(int i=re;i>=rs;i--){cout<<arr[i][ce]<<", ";}
    ce--;}
    if(rs<=re){
    for(int i=ce;i>=cs;i--){cout<<arr[rs][i]<<", ";}
    rs++;} 
}
    cout<<"END";
 }


int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int m,n;
  cin>>m>>n;
  int arr[10][10]={0};
  for(int i=0;i<m;i++)
    {
      
      for(int j=0;j<n;j++)
      {
          
          cin>>arr[i][j];
      } 
     
    }
  spiralprint(arr,m,n); 
  return 0;
}