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
             cnt1 += arr[i][i];
             cnt2+= arr[i][n-i-1];
      }
  }
  
  cout<< cnt1<<" "<<cnt2;

    return 0;
}
