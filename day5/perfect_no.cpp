#include<iostream>
using namespace std;
int main(){

int num ;
cout<<"enter the number"<<endl;
cin>>num;
    int sum =0 ;
for(int i =1 ; i<num ; i++){
if (num%i==0) {
 sum = sum +i;
   }
}
      if (sum == num){

    cout<<"given no. is an perfect num"<<endl;
}
else{

cout<<"given no. is not an perfect num"<<endl;

}





    return 0 ;
}