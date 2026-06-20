#include<iostream>
using namespace std ;
int main () {

 int n ;
 cout<< "enter size of matrix" ;
  cin >> n ;

 int a[10][10] ; 
 cout<< "enter the elements of rows and coloumns of matrix"<< endl ;
   for (int i = 0 ; i < n ; i ++){
     for (int j = 0 ; j < n ; j ++){

        cin>> a[i][j] ;
     }
   }
   bool  issymmetric = true ; 
    for ( int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j < n ; j ++){

            if ( a[i][j] != a [j][i]){
                issymmetric = false ;
            }
        }
    }
     if(issymmetric){
        cout<<"matrix is symmetric"<<endl ;

     }
    else {
        cout<< "matrix is non symmetric" <<endl ;
    }
    return 0 ;
  }