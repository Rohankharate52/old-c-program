

#include<iostream>
using namespace std;


int main(){



    void printArrary(int arr[],int size){

        for(int i=0; i<size; i++){
            cout<<arr[i]<< " ";

        }
        cout<<endl;

    }
    void inc(int arr[],int size){
        arr[0] = arr[0] + 10;

        printArrary(arr,size);



    }
    int main()  {

        int arr[] = {5,6};
        int size =2;
        inc(arr,size);
        printArrary(arr,size);
    }
    return 0;
}
