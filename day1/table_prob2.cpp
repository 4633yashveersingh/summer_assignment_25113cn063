#include <iostream>
using namespace std;
int main()
{
    int n,j ;
    cout<<"type the no. you want table off"<<endl;
    cin>>n;
    cout<<"the following table is:"<<endl;
    for(int i=1 ; i<=10 ; i++){
        j=n*i; 
        cout<<n<<"*"<<i<<"="<<j<<endl;

    }
    return 0 ;
}