#include<bits/std++.h>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  
  for(int i=1;i<=n;i++)
     {
       for(int j=1;j<=2*n-1;j++)
          {
            if(i+j<=n){cout<<" ";}
            else if(i+j==2*n or i+j==n+1 or i==1 or i==n && i+j<2*n){cout<<"*";}
            else{cout<<" ";}
          }
        cout<<endl;
     }

return 0;
}