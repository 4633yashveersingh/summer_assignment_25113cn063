#include<iostream>
using namespace std ;
int main(){
int n  ;
cout<<"enter your no."<<endl;
cin>>n;
 if(n<2){
    cout<<n<< "is not a prime number";
    return 0;
}

   for (int i =2 ;i< n; i++){

       if ( n % i == 0) {
   
        cout<<n <<"is not a prime no."<<endl;
        return 0;
       }
       }
       
        cout<< n<<  "is a prime no."<<endl;
     
     return 0 ;
     }