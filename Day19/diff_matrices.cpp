#include<iostream>
using namespace std;
int main(){

    int rows , cols ;
    cout<<"enter rows and coloumns";
    cin>>rows>>cols;

    int a[3][3] , b[3][3]  , diff[3][3] ;

    cout<<"enter the elements of first matrix"<<endl ;

    for(int i = 0 ; i<rows ; i++){
     for (int j = 0 ; j < cols ; j++){

        cin>> a[i][j] ;
     }

    }

        cout<<"enter the elements of secondmatrix"<<endl ;
       for(int i = 0 ; i < rows ; i ++){
       for ( int j = 0 ; j < cols ; j ++){

        cin >> b[i][j];
       }

       }
       for(int i = 0 ; i< rows ; i++){
        for (int j = 0 ; j< cols ; j ++){

            diff[i][j] = a[i][j] - b[i][j] ;
        }
       }
       cout<<"difference of matrices"<<endl;
       for(int i = 0 ; i<rows ; i++){
        for (int j = 0 ; j<cols ; j++){

            cout<<diff[i][j]<<" " ;

        }
        cout<<endl ;
       }
       return 0 ;
}