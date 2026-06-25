#include<iostream>
using namespace std ;
int main() {

char str1[100] , str2[100] ;
cout<< "enter the first string" <<endl ;
 cin.getline(str1 , 100) ;
 cout<<"enter the second string"<<endl;
 cin.getline(str2 , 100 ) ;

 char printed[100] ;
 int printedcount  = 0 ;
 cout << "common characters :" ;
 for( int i =0 ;str1[i] != '\0' ; i++){

    bool isfoundinsecond = false ;
    for ( int j = 0 ; str2[j] != '\0' ; j++){

        if(str1[i] == str2[j]){
            isfoundinsecond = true ;
            break ;
        }
    }

    bool alreadyprinted = false ;
    for(int p = 0 ; p < printedcount ; p++){

        if (printed[p] == str1[i]){
            alreadyprinted =  true ;
            break ;
        }
    }



    if (isfoundinsecond && !alreadyprinted){
       cout<<str1[i]<<" " ;
       printed[printedcount] = str1[i] ;
       printedcount ++ ;
    }
 } 
cout<<endl ;

return 0 ;
}