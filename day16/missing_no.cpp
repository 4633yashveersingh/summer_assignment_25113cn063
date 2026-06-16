#include<iostream>
using namespace std;
int main(){
 int arr[]= {1 ,2 , 3 , 5 , 6 };
 int size = 5 ;
  
  int n = size + 1 ;
   int sum_total = (n * (n+1)) / 2 ;

   int arraysum = 0 ;

   for(int i = 0 ; i<size ; i++){

    arraysum = arraysum + arr[i] ;

   }
   
   int  missing_num = sum_total - arraysum ;
     
   cout<< "missing num is :" << missing_num << endl ;

   return 0 ; 

}








