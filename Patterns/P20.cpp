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
  for(int i=0;i<2*n+1;i++){
       
      if(i<=n){ 
       for(int j=0;j<i;j++){cout<<"  ";}
       for(int j=n-i;j>=0;j--){cout<<j<<" ";}
        int k=1;
       for(int j=n-i;j>0;j--){cout<<k<<" "; k++;} }
       else{
       for(int j=1;j<2*n+1-i;j++){cout<<"  ";}
       for(int j=n;j<=i;j++){cout<<i-j<<" ";}
        int k=1;
       for(int j=i-n;j>0;j--){cout<<k<<" ";k++;} 
     }
        cout<<endl;
  }
  
return 0;
}