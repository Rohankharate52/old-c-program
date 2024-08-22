



#include<iostream>
#include<vector>
using namesapce std;


int main(){


   //pair of sum
    vector<int> arr{10,20,30,40,50,60,70};

    //pirnt of elements


   //outer loop transvers for each element'

   for(int i=0; i<arr.size(); i++){

    cout<<"We are at element :"<<arr[i]<<endl;

    int element = arr[i];
    //for every element  will treaves on aage wale element 
    for(int j=i+1; j<arr.size();j++){
        cout<<"pair"<<element <<"with "<<arr[j]<<endl;
        
    }


   }

}