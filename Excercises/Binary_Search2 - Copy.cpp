#include<bits/std++.h>
using namespace std;
//#define int long long int
#define F first
#define S second
#define pb push_back

int binary_search(int bs[],int start,int end,int key)
{


while(start<=end){
int mid =(start+end)/2;
if(key==bs[mid]){return mid+1;} 
else if(key>bs[mid]){ start = mid+1; }
else { end = mid-1;}

}
 return -1;
}




int32_t main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  int bs[7]={40 ,55, 60, 70, 76 ,90, 100},key=100;
  int N= sizeof(bs)/sizeof(int);
  int start=0 ,end=N-1;
  int index = binary_search(bs,start,end,key);

  if(index!=-1){cout<<key<<" found at index : "<<index;}
  else{cout<<" Not Found";}

}