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
  
      for(int i=1;i<=2*n+1;i++)
      {  int k = n-i+1;
         if(i<=n+1)
         {
              for(int j=n;j>n-i;j--){cout<<j<<" ";}  
              for(int j=1;j<=2*(n-i)+1;j++){cout<<"  ";}
              
              for(int j=1;j<=i&&j<n+1;j++){
                if(i==n+1){cout<<k+1<<" ";k++;} 

               else{ cout<<k<<" ";k++;}}
         }

         else{    int k=n;
                  for(int j=i-n-1;j<=n;j++){cout<<k<<" ";k--;}  
                  for(int j=2*n;j<2*(i-1)-1;j++){cout<<"  ";}
                    k=n;
                  for(int j=i-n-1;j<=n;j++){cout<<i-k-1<<" ";k--;}
          }
                 
        cout<<endl;
        
   }     
return 0;
}