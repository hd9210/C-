#include <iostream>
using namespace std;

int main()
{   int base,power,c=1;
    cout<<" Enter Base "<<endl;
    cin>>base;
    cout<<" Enter Exponent "<<endl;
    cin>>power;
    for(int i=1;i<=power;i++)
    {
        c=base*c;
    }
    cout<<" Output is : "<<c;
    return 0;
}
