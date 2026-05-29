#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int sum=0;
    while(n>0){
    
        int rem ;
        rem = n%10;
        sum = sum + rem;
        n= n/10;

        }
        cout<<"the sum of numbers is"<< sum <<endl;    

        return 0 ;

    }