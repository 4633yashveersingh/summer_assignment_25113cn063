#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter no to count digit"<<endl;
    cin>>num;
    int temp = num;
    while(num>0)
        {
        num=num/10;
        count++;
    }
    cout<<"the no of digits in "<< temp << "is" << count<<endl;
    return 0;
}
