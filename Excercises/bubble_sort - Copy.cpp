#include<bits/std++.h>
#include<climits>
using namespace std;



void bubble_sort(int arr[],int n)
{

for(int i=0;i<n-1;i++)
   { for(int j=0;j <n-i-1;j++)
      {
        if(arr[j]>arr[j+1])
           {
              swap(arr[j],arr[j+1]);
              
           }
      }
      cout<<i+1<<" pass values are : ";
      for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
      cout<<endl;
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
  bubble_sort(arr,N);
  for(int x:arr){cout<<x<<" ";}
  return 0;
}