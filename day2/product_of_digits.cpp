#include<iostream>
using namespace std;
int main(){
int n , rem , product=1 ;

cout<<"enter the number"<<endl;
cin>>n;
while(n>0){
    rem = n%10;
    product = product * rem;
    n=n/10;
}
cout<<"the product of the number is :"<<product<<endl;


    return 0;
}