

#include<iostream>
using namespace std;

int arr[]= {2,4,6,1,3,7,9,12,56,43,21};
int size = 11;
//initialse maxi varible with the 
//miniuma varible integer value



int maxi = INT_MIN;
for(int i=0; i<size; i++){

    if(arr[i] > maxi ){
        //found a number greater than maxi update maxi
        maxi = arr[i];

    }
}
cout<<"maximum number is "<<maxi <<endl;

 return 0;

