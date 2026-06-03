#include<iostream>
using namespace std;
int main (){

int m , n ;
cout<<"enter no. u want gcd of"<<endl;
cin>>m ;
cin>>n ;
int l ;
l = m%n; 
while (l!=0){
 m = n;
n = l;
 l = m % n ;

}
cout << " gcd is"<<n << endl ;

return 0 ;
}