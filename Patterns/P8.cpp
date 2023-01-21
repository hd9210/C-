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
  for(int i =1;i<=n;i++)
  {
     
      for(int j=1;j<=n;j++)
      {
           if(i+j<=n-(n/2)+ 1.5){cout<<"* "<<"\t";}
           else if(i+(n/2)<=j){cout<<"* "<<"\t";}
           else if(i-j>=(n/2) && i>(n/2)+1){cout<<"* "<<"\t";}
           else if(i+j>2*n-(n/2)-1 && j>(n/2)+1){cout<<"* "<<"\t";}
           else{cout<<"  "<<"\t";}
      }
cout<<endl;

  }
  

   return 0;
}