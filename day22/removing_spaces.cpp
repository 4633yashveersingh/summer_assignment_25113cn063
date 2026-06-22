#include<iostream>
using namespace std ;
int main () {
char str[100] ;
cout<<"enter string" << " " ;
cin.getline (str , 100) ;

char result[100] ;
int j = 0 ;
 
 for (int i = 0 ; str[i] != '\0' ; i++){

    if (str[i] != ' ') {

        result[j] = str[i] ; 
        j++ ;
    
    }
}
    result[j] = '\0' ;

    cout << "string without spaces :" << result << endl ;
     
    return 0 ;
}