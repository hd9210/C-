//#include<bits/std++.h>
#include<iostream>
using namespace std;

void bubble_sort( int arr[],int s)
{  int c=0,d=0;
    for(int i=0;i<s-2;i++)
    {  cout<<i+1<<". Pass "; c=d=0;
      for(int j=0;j<s;j++)
        {if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);c++;}
         else{d++;}
       cout<<arr[j]<<" ";} cout<<endl;
       if(d-c==s){break;}
    }
     cout<<endl<<"Sorted Array is : ";
    for(int i=0;i<s;i++){cout<<arr[i]<<" ";}
}

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
   int s;
   cin>>s;
   int arr[s];
   for(int i=0;i<s;i++){cin>>arr[i];}
    bubble_sort(arr,s);
   return 0;
 }