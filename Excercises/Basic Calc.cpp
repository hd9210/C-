#include<bits/std++.h>
#include<climits>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  long long int a,b;
  char ch;
  
  do
  { cin>>ch;
    switch(ch)
  {   case '+':  cin>>a>>b; cout<<a+b<<endl; 
       break;
     case '-':  cin>>a>>b;cout<<a-b<<endl;
     break;
     case '*':  cin>>a>>b;cout<<a*b<<endl;
     break;
     case '/':  cin>>a>>b;cout<<a/b<<endl;
     break;
     case '%':  cin>>a>>b;cout<<a%b<<endl;
     break;
     case 'x': break;
     case 'X':break;
     default: cout<<"Invalid operation. Try again.";
                
     }
    if(ch=='x' or ch=='X'){break;}
} while(ch!='x' or ch!='X');
      
return 0;}