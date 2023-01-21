#include<bits/std++.h>
#include<climits>
using namespace std;



void insertion_sort(int arr[],int n)
{
    
    int temp;
         for(int i =1;i<n;i++)
         {
          int prev=i-1;
          temp = arr[i];
           while(prev>=0)
       {
           if(arr[prev]>temp)
            {arr[prev+1]=arr[prev]; }
            
           prev--;
       }   arr[prev+1]=temp;
         }
}



int32_t main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int arr[] ={2,4,5,0,-5};
  
  int N= sizeof(arr)/sizeof(int);
  insertion_sort(arr,N);
  for(int x:arr){cout<<x<<" ";}
  return 0;
}