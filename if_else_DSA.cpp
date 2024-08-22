

// nested loop used kiya hai (if else)
#include<iostream>
using namespace std;

int main(){


    int marks;
    cin>> marks;
    if(marks >= 90){
        cout<<"B Grade";

    }
    else{
        if(marks>=60){
            cout<<"C Grade"
        }
        else{
            if(marks >=40){
                cout<<"D Grade";

            }
            else{
                cout<<"F Grade";

            }
        }
    }
}
//if  else if else 
//readty betly bhi aasan hai 

if(marks >=90){
    cout<< "A";

}
else if (marks >= 80){
    cout<<"B ";

}
else if (marks >= 60){
    cout<<"D";

}
else{
    cout<<"F Grade";

}



//bronum variablm creative


int bronum;

cin>>bronum;

if(bronum == 0)

{
    cout<<"Baat Banjayegi";

}
else{
    cout<<"Baat nahi ";

}
