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
         if(i<=(n/2)+1)
         {    for(int j =1;j<=n-(2*i-1)+1;j++){cout<<"  ";}
              for(int j=1;j<=i;j++){cout<<i-j+1<<" ";} 
              for(int j =1;j<=2*i-3;j++){cout<<"  ";}
              for(int j=1;j<=i&&i!=1;j++){cout<<j<<" ";}
              
         }

         else{   
                  for(int j=1;j<=(2*i-1)-n+1;j++){cout<<"  ";}
                  for(int j=i;j<=n;j++){cout<<n-j+1<<" ";} 
                  for(int j=2*(n/2);j>=2*i-n+1;j--){cout<<"  ";}
                  for(int j=i;j<=n&&i!=n;j++){cout<<j-i+1<<" ";}

              
          }
          
        cout<<endl;
        
   }     
return 0;
}