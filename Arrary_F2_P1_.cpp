

#include<iostream>
using namespace  std;
/*
int main(){

    int arr[] = {2,3,4,6,7};
    int arr[5] = {2,4,6,8,10};
    int crr[10] = {2,4,6,8,10};
    //error 
    int drr[4] = {2,4,6,8,10};
    cout<<"Array initialised sucessfully"<<endl;

    return 0;

}
*/

int main(){

   /*int arr[] = {2,3,5,7,9};

    //printing all vlaue
    for(int index=0; index<5; index++){
        cout<< arr[index]<< " ";

    }
    return 0;*/





    


    int arr[10];
    
    cout<<"Enter the input values in array "<<endl;
// taking input in array
    for(int i=0; i<10;i++){
        cin>>arr[i];

    }
    //printing arrary 
    cout<<"printing the valukue fun array"<<endl;
    for(int i=0; i<20; i++){
        cout<<arr[i]<< " ";

    }
    return 0;
}
