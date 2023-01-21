#include<iostream>
using namespace std;


int mirrorReflection(int p, int q)
{ int k=p;
  
  while(p%q!=0)
  {
     p=k+p;
  }

  if((p/k)%2==0&&(p/q)%2==1){return 0;}
  if((p/k)%2==1&&(p/q)%2==1){return 1;}
  if((p/k)%2==1&&(p/q)%2==0){return 2;}

  return -1;

}


    

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int a,b;
  cin>>a>>b;
  cout<<mirrorReflection(a,b);
  return 0;
}