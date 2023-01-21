#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a=0, b=1, sum=0, n;
    cin>>n;
    cout<<"Fibonacci Series: "<<a<<" "<<b;
    while(sum<=n)
    {    sum=a+b;
        a=b;
        b=sum;
     cout<<" "<<sum<<" ";
    }

    return 0;
}
