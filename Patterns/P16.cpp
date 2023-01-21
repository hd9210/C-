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
  int no=1;
  for(int i=1;i<=n;i++)
     {
       for(int j=1;j<=i;j++)
          {
            if(j==1&&i!=1){cout<<no<<" ";}
            else if(i==j){cout<<no;no++;}
             else{cout<<0<<" ";}
           
          }

        cout<<endl;
     }

   

return 0;
}