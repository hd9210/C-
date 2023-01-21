#include<bits/std++.h>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  char ch;
  cin>>ch;cout<<int(ch);
	if(65<=(int)ch&&(int)ch<=90){cout<<"UPPERCASE";}
	else if(97<=(int)ch&&(int)ch<=122){cout<<"lowercase";}
	else{cout<<"Invalid";}
return 0;}