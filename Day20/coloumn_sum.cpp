#include<iostream>
using namespace std ;
int main (){

  int r , c ;
  cout<< "enter no. of rows and coloumns" ;
   cin >> r >> c ;
   
   int a [10][10] ;

   cout<< "enter the elements"<<endl ;

   for (int i = 0 ; i < r ; i ++){
    for (int j = 0 ; j < c ; j ++){

        cin >> a[i][j] ;
    }
   }
   cout << " coloumn sum " << endl ;

   int total_sum = 0 ;

   for (int j = 0 ; j < c ; j ++){
    
    int col_sum = 0 ;
    for (int i = 0 ; i < r ; i ++){

        col_sum = col_sum + a[i][j] ;
    }
     total_sum = total_sum + col_sum ;

     cout<< "coloumn"<<j+1<<"sum is =" << col_sum << endl ;
   }
     cout<< "total sum is : "<< total_sum <<endl ;
     
     return 0 ;
    
}