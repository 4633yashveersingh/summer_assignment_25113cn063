#include<iostream>
using namespace std;
int main (){
int a , b  ,c , n;
a=0 ;
b=1;
cout<<"enter the no. till you want fibonacci of"<<endl;
cin>>n;
cout<<a<<"\t"<<b;
for (int i = 2 ; i<n ; i++){
c=a+b;
cout<<"\t"<< c ;
a=b;
b=c;
}
return 0 ;
}