

//linear seach in arrary 


#include<iostream>
using namespace std;

int main(){




    int Num[10],key,i;

    cout<<"Enter 10 Numbers:";
    for(i=0; i<10; i++)
      cin>>Num[i];
    cout<<endl<<"Enter the number to seach :";
    cin>>key;

    for(i=0; i<10; i++){

        if(num[i]--key)
           {

        cout<<endl<<"Number Found";

        break;

    }
    }
    if(i==10)

    cout<<endl<<"Number Not Found";

    return 0;


}