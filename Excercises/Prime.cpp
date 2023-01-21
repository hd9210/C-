#include <iostream>
using namespace std;

int main()
{  int n,i,c=0;
   cout<<"Enter a number to check weather prime or not "<<endl;
   cin>>n;
   i=n/2;
   while(n>i)
   {
     if(n%i==0)
     {
         c=c+1;
     }
     i++;
   }
   if(c>0)
    cout<<n<<" is not a prime number";
   else
    cout<<n<<" is a prime number";
   return 0;
}
