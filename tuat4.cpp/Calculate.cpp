#include<iostream>
//Write a program to calculate x power of y  
using namespace std;
int main()
{
    int x,y,i,pro=1;
    cout<<"\nEnter value of x & y :";
    cin>>x>>y;
    i=1;
    while(i<=y)
    {
        pro=pro*x;
        i=i+1;

    }
    cout<<"Final value= "<<pro;
    return 0;

}