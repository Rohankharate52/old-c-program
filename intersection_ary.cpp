

//intersection of element s





#include<iostream>
#include<vector>

using namespace std;


int main(){




    //intersectionn 


    vector<int>arr{1,2,3,4,6,8};
    vector<int>brr{3,4,10};

    vector<int>ans;

    //outer loop arr vector
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        //for every element  run loop on brr
        for(int j=0; j<brr.size(); j++){
            if(element == brr[j]){
                ans.push_back(element);

            }
        }
    }
    //print ans
    for(auto value: ans ){
        cout<<value <<" ";


    }
    cout<<endl;
    return 0;
}