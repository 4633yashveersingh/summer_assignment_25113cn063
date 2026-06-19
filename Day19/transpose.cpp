#include<iostream>
using namespace std ;
int main(){

    int rows , cols ;
    cout<<"enter the num of rows and columns " ;
     cin>> rows >> cols ;

      int a[3][3] , transpose[3][3] ;

      cout<<"enter the elements of matrix"<<endl;
      for(int i = 0 ; i<rows ; i++){
        for(int j = 0 ; j < cols ; j++){

         cin>> a[i][j] ;
        }
      }

      for ( int i = 0 ; i < rows ; i ++){
        for ( int j = 0 ; j < cols ; j ++){

            transpose[j][i] = a[i][j] ;
        }
      }

      cout<< "Transpose of matrix " <<endl ;

      for (int i = 0 ; i < rows ; i++){
        for ( int j = 0 ; j< cols ; j ++){

            cout<<transpose[i][j] << " " ;
        }
        cout<< endl ;
      }

      return 0 ; 
}