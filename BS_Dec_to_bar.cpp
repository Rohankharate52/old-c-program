//sove 

#include<iostream>
using namespace std;

int decimalToBinaryMethod(int n){
    //division method


    int binaryno = 0;
    int i =0;

    while(n>0){
        int bit = n % 2;
        binaryno = bit*pow(10, i++)+binaryno;

       //cout <<bit<<endl;
        n = n / 2;

    }
    return binaryno;

}
int main(){
    int n ;
    cin>>n;
    int binary = decimalToBinaryMethod(n);
    cout << binary<<endl;
}

//oout put 
// 10 ...
// 1010
