#include <iostream>
using namespace std;

int main()
{   int arr[]={-90,1,2,3,4,5,56,-12,4,56,789,235,906,221,5};
    int key,position=-1;

    cout<<" Enter Search Key "<<endl;
    cin>>key;

   for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++){if(key==arr[i]){position=i;}}
    if(position>-1){cout<<" Element found at Position "<< position+1;}
    else{cout<<"Not found";}
    return 0;
}

