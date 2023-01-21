#include<iostream>
#include<vector>
using namespace std;



 int maxArea(vector<int>& arr)
{  
  int t,m,n;
  int water=0,max_water=0;
 int j=arr.size()-1;
 int i=0;
 while(1)
 { 
  water=min(arr[i],arr[j])*(j-i);
  
  if(water>max_water){max_water=water;}
  if(arr[i]>arr[j]){j--;}
  else{i++;}
  if(i>=j){break;}
 }

return max_water;
}


int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  vector<int> arr={1,8,6,2,5,4,8,3,7,4,3,11};
  
  cout<<maxArea(arr)<<endl; 
   
  return 0;
}