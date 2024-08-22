

//miising number in array....
#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        long int sum = 0, total;
        cin>>N;
        int A[N-1];
        total = (N*(N+1))/2;
        for(int i=0; i<N; i++){
            cin>>A[i];
            sum = sum + A[i];

        }
        cout<<total-sum<<endl;
    }
    return 0;
}
