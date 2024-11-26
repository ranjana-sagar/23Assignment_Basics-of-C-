#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:_";
    cin>>a>>b;
    if(a>=b)
       cout<<a<<" greater than "<<b;
    else
       cout<<b<<" greater than "<<a;
    return 0;      
}