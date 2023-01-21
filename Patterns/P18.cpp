#include<bits/std++.h>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,no;
  cin>>n;
  for(int i=1;i<=n;i++){

       for(int j=n-1;j>=i;j--)
       {  
          cout<<"  ";
       }
       no=i;
       for(int j=1;j<=i;j++){cout<<no<<" ";no++;}
      no=no-2;;
       for(int j=1;j<=i-1;j++){cout<<no<<" ";no--;}

       
    cout<<endl;
  }
  
return 0;
}