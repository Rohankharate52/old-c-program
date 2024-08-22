
#include<iostream>
using namespace std;
int solve(int divident,int divisor){




int s =0;
int e = divedend;//dividend
int ans =0;
int mid = s + (e-s)/2;
while(s<=e){
    //perfect solutiono
    if(mid*divisor == dividend){ //dividend
        return mid;

    }
    //not perfect sol
    if(mid*divisor > dividend ){
        //left 
        e = mid -1;

    }
    else {
        //ans store
        ans = mid;
        //right serach 
        s = mid + 1;


    }
    mid = s + (e-s)/2;

}
return 0;

}




int main(){
    int dividend = 22;
    int divisor = 7;

    int ans = solve(dividend , divisor);
    cout<<"Ans is"<<ans <<endl;
    return 0;
}