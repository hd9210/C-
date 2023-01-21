#include<bits/std++.h>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  short int n;
  cin>>n;
 
  for(int i=1;i<=5;i++)
     {
         
        for(int j=i;j>=1;j--){cout<<j<<" ";}
       
      cout<<endl;
     }

   return 0;
}