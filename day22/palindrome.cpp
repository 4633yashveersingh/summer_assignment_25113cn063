#include<iostream>
using namespace std ;
int main() {

    char str[100] ;
    cout<< " enter the string"<< " " ;
    cin.getline (str , 100) ;

    int length = 0 ;
    while (str[length] != '\0'){
        length ++ ;
    }
    int start = 0 , end = length -1 ;
    
    bool ispalindrome = true ;

    while (start < end) {

    if ( str[start] != str[end]) {
 ispalindrome = false ;
 break ;
  }
  start ++ ;
  end -- ;
}
if (ispalindrome) {
  
    cout << "the string is palindrome"<<endl ;

}
else {

    cout << " the string is not a palindrome" << endl ;
}

  return 0 ;
}