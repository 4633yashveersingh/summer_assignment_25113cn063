#include<iostream>
using namespace std ;
int main (){

char str[100] ;
cout<< "enter the string :"<< " " ;
cin.getline(str , 100) ;

for (int i = 0 ; str[i] != '\0' ; i ++) {

    if (str[i] >='a' && str[i]<='z'){

        str[i] = str[i] - 32 ;   // lowercase strings exactly 32 positions away hote hain uppercase se that is why sirf 32 minus krke convert kar skte hain .
    }
}

cout << "uppercase string is : " << " " << str <<endl ;

return 0 ;
}
