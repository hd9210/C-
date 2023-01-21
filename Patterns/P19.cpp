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
  for(int i=1;i<=n;i++){
       for(int j=1;j<=2*n-1;j++){

        if(j<=i){cout<<j<<" ";}
        else if(j+i>=2*n){cout<<2*n-j<<" ";}
        else{cout<<"  ";}
     }
        
    cout<<endl;
  }
  
return 0;
}