#include<iostream>
using namespace std;
int main()
{
    int n , rev=0 , rem , original ;
    cout<<"enter the number"<<endl;
    cin>>n;
     original = n;     
    while(n>0){
        rem = n%10;
        rev = rev*10 + rem ;
        n = n/10;
    }
    cout<<"the reversed number is :"<<rev<<endl;
    if(original==rev){
    cout<<"the given number is a palindrome"<<endl;
    }
    else if (original!=rev){
        cout<<"the given number is not  a palindrome"<<endl;

    }
 return 0;
}