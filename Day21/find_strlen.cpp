#include<iostream>
using namespace std ;
int main (){

char str[100] ; 

cout << "enter the string"<< " " ;
cin.getline(str , 100) ; 

int length = 0 ;

while(str[length] != '\0'){

    length ++ ;
}
 cout<< "length of character is"<< " " <<length<<endl;


  return 0 ;
}