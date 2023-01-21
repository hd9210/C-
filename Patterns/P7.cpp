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
  for(int i=1;i<=2*n;i++)
     {
         if(i<=(n+1)&&(i%2!=0))
        {
          for(int j=1;j<=n-i;j++){cout<<" ";}
          for(int j=1;j<=i;j++){cout<<"* ";}  
          cout<<endl;
        }


         else if(i>(n+1)&&(i%2!=0)){

          for(int j=i;j>n;j--){cout<<" ";}
          for(int j=i;j<=2*n-1;j++){cout<<"* ";}  
          cout<<endl;
             }
          else{}
      
     }

   return 0;
}