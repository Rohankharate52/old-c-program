
#include<iostream>
#include<cmath>
using namespace std;



int decimalToBinaryMethod2(int n){
//divison mehtod
int binaryno = 0;
int i =0;
while(n>0){
    int bit = n % 2;
    binaryno = bit*pow(10,i++) + binaryno;
    n = n / 2;
}
return binaryno; 
}





int decimalToBinaryMethod2(int n ){
    //Bitwise mehtod
    int binaryno = 0;
    int i = 0;
    while (n>0) {
        int bit = (n & 1);
         bianryno = bit*pow(10,i++) + bianryno;
        n = n >> 1;


    }
    return binaryno;

}
int main(){
    int n;
    cin>>n;
    int binary = decimalToBinaryMethod2(n);
    cout<<binary<<endl;

}

//23
//10111