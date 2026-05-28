#include<iostream>
using namespace std ;
int main(){
    int n ;
    int fact=1;
    cout<<"write the no. you want factorial of"<<endl;
    cin>>n;
    int temp =n;
    while(n>1)
    {
        fact = fact*n;
        n--;
    }
    cout<<"the factorial of"<< temp <<"is"<<fact<<endl;
    return 0 ;
}