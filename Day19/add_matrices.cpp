#include<iostream>
using namespace std;
int main(){

    int rows , cols ;
    cout<<"enter rows and coloumns";
    cin>>rows>>cols;

    int a[5][5] , b[5][5]  , sum[5][5] ;

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

            sum[i][j] = a[i][j] + b[i][j] ;
        }
       }
       cout<<"sum of matrices"<<endl;
       for(int i = 0 ; i<rows ; i++){
        for (int j = 0 ; j<cols ; j++){

            cout<<sum[i][j]<<" " ;

        }
        cout<<endl ;
       }
       return 0 ;
}