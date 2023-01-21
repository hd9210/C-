#include<bits/std++.h>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int k=1;
  for(int i=1;i<=5;i++)
     {
         
        for(int j=i;j>=1;j--){cout<<k++%2<<" "; }

       
      cout<<endl;
     }

   return 0;
}