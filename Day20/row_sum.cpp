#include<iostream>
using namespace std ;
int main () {

int r , c ;
cout<< "enter the numbers of rows and coloumns" << endl ;
 cin >> r >> c ;

  int a[10][10] ;

  cout<< " enter the elements"<<endl;
   for (int i = 0 ; i < r ; i++){

    for (int j = 0 ; j < c ; j ++){

         cin >> a[i][j] ;
    }
   }
   cout << " row sum is :" <<endl ;
           int totalsum = 0 ;

    for (int i = 0 ; i < r; i ++ ) {

        int rowsum = 0 ;
        for (int j = 0 ; j < c ; j ++) {

            rowsum = rowsum + a[i][j] ;
        }
         totalsum = totalsum + rowsum ;

        cout << "row" << i+1 << "sum is =" << rowsum<<endl ;
    }
            cout<< "total sum is :" <<totalsum <<endl;

    return 0 ;
}
