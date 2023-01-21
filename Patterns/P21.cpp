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
      int a=1;
       for(int j=1;j<=i;j++){
       cout<<a<<" ";
       a=a*(i-j)/j;
        
     }
        
    cout<<endl;
  }
  
return 0;
}