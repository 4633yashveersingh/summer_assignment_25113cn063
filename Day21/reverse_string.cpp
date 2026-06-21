#include<iostream>
using namespace std ;
int main(){

char str[100];
cout<<"enter the line or word :" << " " ;
cin.getline(str ,100) ;

int length = 0 ;

while(str[length] != '\0'){

    length ++ ;

}
int start = 0 ;
int end = length -1 ;

while ( start < end){

    swap (str[start] , str [end]) ;

    start ++ ;
    end -- ;
}

cout << "new line is" << " " <<str <<endl ;



    return 0 ;
}