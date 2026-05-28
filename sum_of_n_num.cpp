#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0,n;
    cout<<"enter the no till you want sum"<<endl;
    cin>>n;
    for(int i = 1 ; i<=n; i++)
    {
        sum =sum+i;
    }
    cout<<"The sum till number n is:"<<sum<<endl;
    return 0;
}