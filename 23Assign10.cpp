#include<iostream>
using namespace std;
int main()
{
    int x[10];
    int i,sum=0;
    cout<<"Enter 10 numbers:";
    for(i=0;i<10;i++)
    {
      cin>>x[i];
      sum+=x[i];
    }  
    cout<<"Sum of 10 numbers is "<<sum<<endl;
    return 0;
}