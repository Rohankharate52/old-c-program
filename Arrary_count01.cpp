

#include<iostream>
using namespace std;

int main(){


    int arr[] = { 0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
    int size = 15;

    int numZero = 0;
    int numone = 0;


    for(int i=0; i<size; i++){

        //if zero fournd,increment numzero
        if(arr[i] == 0){
            numZero++;

        }
        //if one found increment numone
        if(arr[i] == i){
            numOne++;

        }

    }

    //if(arr[i] == 1){
        //numOne++;

    
    }
}
cout<<" number of zeroes" <<numZero <<endl;
cout<<" number of ones" <<numOne <<endl;