#include <iostream>
using namespace std;

int main()
{
  int arr[10][10] ;
  int n,cnt1=0,cnt2=0,i,j;
  
  cin>>n;
  
  for(i =0;i< n; i++){
      for( j=0; j< n; j++){
          cin>> arr[i][j];
      }}
      
  for(i =0;i< n; i++){
      for( j=0; j< n; j++){
         if(i == j){
             cnt1 += arr[i][j];
         }
         if( i+j == n-1){
             cnt2+= arr[i][i];
         }
      }
  }
  
  cout<< cnt1<<" "<<cnt2;

    return 0;
}
