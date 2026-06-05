#include<iostream>
using namespace std ;
int main (){

 int num , n ;
  cout<< " enter the number you want factor of :";
  cin >> num ;
  cout<<endl<<"the factors of given number are :";

for (int i = 1 ; i<= num ; i++){
  n = num % i ;
   if ( n == 0 ){
 cout << i << " \t " ; 
 }
  
}
  return 0 ;
}