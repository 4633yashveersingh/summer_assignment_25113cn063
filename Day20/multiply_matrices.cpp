#include<iostream>
using namespace std ;
int main () {

    int r1 , r2 , c1 , c2 ;
    cout<< "enter values of rows and coloumns of first matrix" ;
     cin >> r1 >> c1 ;
         cout<< "enter values of rows and coloumns of second matrix" ;
         cin>> r2 >> c2 ;


    if (c1 != r2){

        cout<< " matrix multiplication not possible" ;
    }
    int a[10][10] , b[10][10] , result[10][10] ;
     
    cout<< "enter the elements of first matirx"<<endl ;
    for(int i = 0 ; i < r1 ; i++){
        for(int j= 0 ; j <c1 ; j++){

            cin>> a[i][j] ;
        }
    } 
          cout<< "enter the elements of second matirx"<<endl ;
         for(int i = 0 ; i < r2 ; i++){
        for(int j= 0 ; j <c2 ; j++){

            cin>> b[i][j] ;
        }
    } 
      
            for (int i = 0 ; i < r1 ; i++){
            for(int j = 0 ; j < c2 ; j ++){

                result[i][j] = 0 ;

                for(int k = 0 ; k < c1 ; k++){

                    result[i][j] = result[i][j] + a[i][k] * b[k][j] ;
                }
            }

         }
              cout << "resultant matrix "<<endl;
              for(int i = 0 ; i < r1 ; i ++){
                for(int j = 0 ;  j < c2 ; j ++){

                    cout<< result[i][j]<< " " ;
                }
                cout<<endl;
              }

            return 0 ;
        }



