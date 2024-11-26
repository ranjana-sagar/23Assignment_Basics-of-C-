#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float average;
    cout<<"Enter three numbers:_";
    cin>>a>>b>>c;
    average=(a+b+c)/3.0;
    cout<<"Average of "<<a<<","<<b<<","<<c<<" is "<<average<<endl;
    return 0;
}