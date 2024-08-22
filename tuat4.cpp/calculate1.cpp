#include<iostream>
//Write a program to calculate x resto y 
using namespace std;
int main()
{
    int x,y,i,pro=1;
    cout<<"Enter value of x & y :";
    cin>>x>>y;
    for(i=1;i<=y;i++)
        pro=pro*x;

    cout<<"\nFinal value = "<<pro;
    return 0;
}