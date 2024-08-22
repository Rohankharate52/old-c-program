


#include<iostream>
using namespace std;
int main(){




    int arr[] = { 1,2,3,4,5,6,7,8};
    int size =8;

    int key = 15;
    bool flag = 0;

    //o => not found
    //=> found
    //liner serch 
    for(int i=0; i<size; i++){

        if(arr[i]==key){

            //found
            flag = 1;

        }
    }
    if(flag ) 
    cout<<"Present "<<endl;
    else
       cout<<" Absent" <<endl;


       return 0;

    }
