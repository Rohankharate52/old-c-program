//pair off solve triplet


#include<iostream>
#include<vector>
using namesapce std;

int main(){



    //pair sum

    vector<int>arr{10,20,40,60,70};
    int sum = 80;
    //print 
    for(int i=0; i<arr.size();i++){
        int element = arr[i];
        //for
        for(int j= i+1; j<arr.size();j++){
            if(element + arr[j] ==sum){
                cout<<"pair Found "<<element <<","<<arr[j]<<endl;

            }
        }
    }
}