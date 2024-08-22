

//binary number system are slove.... 

#include<iostream>
using namespaace std;

int decimalToBinaryMethod(int n){

    //division method

    while(n>0){
        int bit = n % 2;
        cout<<bit<<endl;
        n = n / 2;

    }
    return 0;

}
int main(){

    int n;

    cin>>n;

    int binary = decimalToBinaryMethod(n);
}