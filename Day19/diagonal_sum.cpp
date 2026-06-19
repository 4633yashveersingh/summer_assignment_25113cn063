#include<iostream>
using namespace std ;
int main () {

    int n ;
    cout<<"Enter the size of square matrix" ;
     cin >> n ;

      int a[3][3] ;
       cout<<"enter elements of matrix "<<endl;

      for(int i = 0 ; i < n ; i ++ ){ 
         for( int j = 0 ; j < n ; j++){
            cin>> a[i][j];
         }
      }
      int sum = 0 ;
      for(int i = 0 ; i < n ; i ++){
        sum = sum + a [i][i];
      } 
      cout<<"diagonal sum  "<<sum<< endl ;
      return 0 ; 
