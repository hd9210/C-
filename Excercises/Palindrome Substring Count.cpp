#include<iostream>
using namespace std;

bool palindrome(char str[],int i,int j)
{
  bool s = false;
  
                      
  while(i<=j){
    if(str[i]!=str[j]){return false;}
    s=true;
    i++;j--;
  }
return s;
}

int countpalindrome(char str[],int n)
{ int count =0;

  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        if(palindrome(str,i,j)==1){count++;}
    }
  }

return count;

}
int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n=0;
  char str[1000];
  for(int i=0;i<=1000;i++)
    { char t=cin.get();
      if( t==-1){break;}
      else{str[i]=t;} n++;
    }
 
 cout<<countpalindrome(str,n)+n;
  return 0;
}