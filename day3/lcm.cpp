#include<iostream>
int gcd(int m , int n ) {
int l = m%n; 
while (l!=0){
 m = n;
n = l;
 l = m % n ;
}
return n;
}

using namespace std;
int main(){
int a = 4 ,b = 6 ;
 cout << endl;
 int lcm ;
 lcm = (a*b) / gcd(a,b) ;

 cout<<"lcm is "<<lcm<<endl;
  
 return 0 ;
}