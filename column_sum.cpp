#include <iostream>
using namespace std;

int main()
{
  int arr[10][10] ;
  int n,cnt = 0,i,j;
  
  cin>>n;
  
  for(i =0;i< n; i++){
      for( j=0; j< n; j++){
          cin>> arr[i][j];
      }  }
      
      int maxi =0 , index;
  for(i =0;i< n; i++){
      cnt =0;
      for( j=0; j< n; j++){
        cnt+= arr[j][i];
        maxi =max(maxi,cnt);
        index = j;
      }
      cout<< cnt<<endl;
  }
  
  cout<<"Leader ->"<<index+1;

    return 0;
}
