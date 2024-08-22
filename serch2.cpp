//frist occernen




#include<iostream>
#include<vector>

using namespace std;



int fristOcc(vector<int>arr,int target){
    int s = 0;
    int e = arr.size() -1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s <= e ){
        if(arr[mid] == target ) {
            //ans stare
            ans = mid;
            //left stare
            e = mid - 1;
            
        }
        else if(target < arr[mid] ){
            //right serch
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    
    vector<int>v{1,3,4,4,4,4,6,7};
    int target = 4;
    
    int ans = fristOcc(v,target);
    cout<<"ans is."<<ans<<endl;
    return 0;

}








