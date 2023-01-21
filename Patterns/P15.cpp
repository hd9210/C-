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
  {  int no=1;
  	for(int j=1;j<=n-i;j++){cout<<"  ";}
    for(int j=1;j<=2*i-1;j++){cout<<no<<" ";no++;}
    cout<<endl;
  }
return 0;}