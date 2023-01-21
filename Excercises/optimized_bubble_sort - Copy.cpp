#include<bits/std++.h>
#include<climits>
using namespace std;
//#define int long long int
#define F first
#define S second
#define pb push_back





vector<int> optimizedBubbleSort(vector<int> v){
     int c=0;
    for(int i =1;i<v.size()-1;i++)
    {   int a=0,b=0;
        for(int j=0;j<v.size()-1-i;j++)
         { if(v[j]>v[j+1]){swap(v[j],v[j+1]); a++;}
             
            else{b++; }
         } 
         
        if(b-a==v.size()-1){ cout<<"break used ";  break;}
    }
    
    return v;
}


int32_t main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  vector<int> arr ={1,2,3,4};
  vector<int> v;
  //int N= sizeof(arr)/sizeof(int);
  v = selection_sort(arr);
  for(int x:v){cout<<x<<" ";}
  return 0;
}