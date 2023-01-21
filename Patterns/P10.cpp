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
	    for(int i=1;i<=2*n-1;i++)
      {
         if(i<=n)
         {
                
                for(int j=1;j<=2*n-1;j++)
                      { 
                       if(i+j==n+1){cout<<"*";}
                       else if(j>n&&j-i==n-1){cout<<"*";}
                       else{cout<<" ";}
                      } 
          cout<<endl;
         }

         else{
                 for(int j=1;j<=2*n-1;j++)
                      { 
                       if(i-j==n-1){cout<<"*";}
                       else if(j>n&&j+i==2*n-1+n){cout<<"*";}
                       else{cout<<" ";
                                          } 
                        }

                  cout<<endl;}
        
        
   }     
return 0;
}