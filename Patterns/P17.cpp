#include<bits/std++.h>
using namespace std;

int main()
{
  #ifndef online_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int i=0,j=0,n,ch;
  cin>>n;
  cout<< " Press 1 --> Lower Left Traingle \n Press 2 --> Upper Left triangle \n Press 3 --> Lower Right Triangle \n Press 4 --> Upper Right Triangle \n Press 5 --> Star \n Press 6 --> Upper Middle Triangle \n Press 7 --> Lower Midde Triangle "<<endl;
  cin>>ch;
  switch(ch)
  {

   case 1:  for(i=0;i<n;i++)               // Press 1 --> Lower Left Traingle 
   	          {for(j=0;j<n;j++)
   	             {
                     if(i>=j){cout<<" * ";}
   	             }
   	             cout<<endl;
   	          }
    break;
   case 2:   for(i=0;i<n;i++)       // Press 2 --> Upper Left Traingle
   	          {for(j=0;j<n;j++)
   	             {
                     if(i<=j){cout<<" * ";}
   	             }
   	             cout<<endl;
   	          }   
   	break;
   case 3:    for(i=0;i<n;i++)          // Press 3 --> Lower Right Traingle
   	          {for(j=0;j<n;j++)
   	             { 
                     if(i+j>=n-1){cout<<"* ";}
                     else{cout<<"  ";}
   	             }
   	             cout<<endl;
   	          }  
   	break;
   case 4:                               // Press 4 --> Upper Right Traingle
   	          for(i=0;i<n;i++)
   	          {for(j=0;j<n;j++)
   	             { 
                     if(j>=i){cout<<"* ";}
                     else{cout<<"  ";}
   	             }
   	             cout<<endl;
   	          }  
   	break;
   case 5:      for(i=0;i<n;i++)         // Press 5 --> Star
   	          {for(j=0;j<n;j++)
   	             { 
                     if(i==j or i==0 or j==0 or i==n-1 or j==n-1 or i+j==n-1){cout<<"* ";}
                     else{cout<<"  ";}
   	             }
   	             cout<<endl;
   	          }   
   	break;
   	 case 6:      for(i=0;i<n;i++)       // Press 6 --> Upper Middle Traingle
   	          {for(j=0;j<n;j++)
   	             { 
                     if(i+j>=n-1){cout<<"* ";}
                     else{cout<<" ";}
   	             }
   	             cout<<endl;
   	          }   
   	break;
   	 case 7:       for(i=n;i>-1;i--)  // Press 7 --> Lower Middle Traingle
   	          {for(j=0;j<i;j++)
   	             { 
                     cout<<"* ";
   	             }cout<<endl;
   	             for(int k=0;k<n+1-i;k++){cout<<" ";}
   	          }   
   	break;

   default: cout<<" Enter a positive Vaule "<<endl; 
  }
  
return 0;}