#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number:_";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<", "<<"b="<<b<<endl;
    return 0;
}