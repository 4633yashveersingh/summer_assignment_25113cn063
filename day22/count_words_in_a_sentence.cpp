#include<iostream>
using namespace std ;
int main () {

char str[100] ;
cout<< "enter the string"<< " " ;

cin.getline(str ,100) ;

int count = 0 ;

for (int i = 0 ; str[i] != '\0' ; i++){ // word count hoga jab character space ni hoga .

    if(str[i] != ' ' && (i == 0 || str[i-1]== ' ')) {
        count ++ ;
    }    
} 
cout << " number of words in a sentence" << count << endl ;

return 0 ;


}