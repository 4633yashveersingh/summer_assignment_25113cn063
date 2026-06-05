#include<iostream>
using namespace std;
int main(){
int num , temp , dig , fact_sum = 0 ;

cout<<"enter num :"<<endl;
cin>>num ;
temp = num ;
while(temp>0){
 dig = temp % 10 ;

  int fact = 1 ;
 for(int i =1 ; i<=dig ; i++){
  
  fact = fact * i ;
   }
   temp = temp / 10 ; 
    fact_sum = fact_sum + fact ;
}
 if (fact_sum == num){

    cout<<"it is a strong number"<<endl;
 }
else{
    cout<<"it is not a strong number"<<endl;
}

    return 0 ;
}