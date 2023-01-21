#include <iostream>
using namespace std;

int main()
{  int a,b=0,c;
    cin>>c;
    while(c>0)
    {
       a=c%10;
       b=b*10+a;
       c=c/10;

    }
    cout<<"reverse is" <<b;
    return 0;
}
