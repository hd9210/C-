//#include<bits/std++.h>
#include<iostream>
using namespace std;

void insertion_sort( int arr[],int s)
{
  int key,j;
 for(int i=1;i<s;i++)
  {  key=arr[i];
     j=i-1;
     while(j>=0&&arr[j]>key){arr[j+1]=arr[j];j--;}
     arr[j+1]=key;
   }

    for(int k=0;k<s;k++){cout<<arr[k]<<" ";}cout<<endl;

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
    insertion_sort(arr,s);
   return 0;
 }