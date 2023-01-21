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
  int a=0,b=1,c=0;
 
  for(int i=1;i<=n;i++)
     {
       for(int j=1;j<=i;j++)
          { 

            if(i==2&&j==2){cout<<1<<" ";}
            else{
            cout<<c<<" ";
             
            c=a+b;
            a=b;
            b=c;
          } }

        cout<<endl;
     }

   

return 0;
}