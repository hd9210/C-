#include<iostream>
using namespace std;


int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,m;
  cin>>m>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){for(int j=0;j<n;j++){cin>>arr[i][j];}}
  int row=0,col=0;
 while(row+col<=m+n-2){
  while(col<n && row>=0)
  {
    cout<<arr[row][col]<<" ";
    row--;
    col++;
  } row++;
    
    if(col>n-1){col--;row++;}
  while(col>=0&&row<m)
  {
    cout<<arr[row][col]<<" ";
    row++;
    col--;
  } col++;
  if(row>m-1){row--;col++;} 
    }
  return 0;
}