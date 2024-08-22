
#include<iostream>
using namespace std;
//displaying array elements .....

int main(){

    int number[5] = {7,5,6,12,35};

    cout << "The numbers are: ";
    //Printing array elements
    //using range base for loop 
    for(const int &n : numbers ){
        cout<<n<<" ";

    }
    cout<<"\nThe numbers are: ";
    //printing array element 
    //using traditional for loop
    for(int i=0; i<5;++i){
        cout << numbers[i]<<" ";

    }
    return 0;
}
//output
//the numbers are: 7 5 6 12 35
//the numbers are 7 5 6 12 35 