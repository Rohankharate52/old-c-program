



//printing solid rectangle patteran
//outer loop hai row ki liye hota hai

for(int row=0; row<3; row=row+1){

    //inner loop hai col ki liye hota hai

    for(int col=0; col<5; col=col+1){
        cout<< " * ";

    }

    cout<<endl;

}
output:=


* * * * * 
* * * * * 
* * * * *


//outer loop row show karti hai
for(int row=0; row<5; row=row+1){
    // innner loop col show karti hai
    for( int col=0; col<7; col+1){
        cout<<" * " ;

    }
    cout<<endl;

}

output:=

* * * * * * * 
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * * 

for(int row=0; row<4; row=row+1){

    for( int col=0; col<5; col+1){
        cout<<" * ";

    }
    cout<<endl;
}

output:= 

* * * * *
* * * * *
* * * * *
* * * * *




//hollow reatangles ...

for(int row=0; row<3; row=row+1){
    //frist row or last row print 
    if(row == 0 || row == 2){
        for(int col = 0; col<5; col++){
            cout<<"*  ";
        }
    }
    
}else{
    //remening middle row
    //frist star
    cout<<"* ";
    //space
    for(int i=0; i<3; i++){
        cout<<" ";

    }
    //last star
    cout<<"*";

}
cout<<endl;


output:=

* * * * *
*       *
* * * * *

//user defined hollow reatangles...

int rowCount,colCount;
cin>> rowCount;
cin>> colCount;


//hollow reatangles
for(int row=0; row<rowCount; row++){
    //frist row last row print 
    if (row == 0 || row == rowCount-1){
        for(int col=0; col<colCount;col++){
            cout<<"*  ";

        }
    }
    else {
        //remeaing middle row 
        //frist star
        cout<<"*  ";
        //space 
        for(int i=0; i< colCount-2; i=i+1){
            cout<<"  ";

        }
        //last star
        cout<<"*  ";

    }
    cout<<endl;
}


output:=

6
8

* * * * * * 
*         * 
*         *
*         *
*         *
* * * * * * 

 

 //pyraind triangle aa



 int n;
 cin>>n;

 for(int row=0; row<n; row++){
    for(int col=0; col< row+1; col=col+1){
        cout<<"*";

    }
    cout<<endl;

 }


 output:=

 user defiddd..

 6

*
* *
* * *
* * * *
* * * * * 
* * * * * * 



//inverted pyramid.... (n-row) formulaaa


int n;
cin>>n;


for(int row=0; row<n; row++){
    for(int col=0; col<n-row; col++){
        cout<<"* ";

    }
    cout<<endl;

}


output:=


user deinded..
6

* * * * * *
* * * * *
* * * *
* * *
* *
*

//Numeric half pyramid pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

//generic code ....

for(int row=0; row<n; row++)
{
    for(int col=o; col<row+1; col++)
    {
        cout<<col+1;

    }
    cout<<endl;

}


//inverted half pyramid ....
//utala

//generic code for number


int n;
cin>> n;

for( int row=0; row<n; row++){
    for(int col=0; col<n-row; col++){
        cout<<col+1;

    }
    cout<<endl;

}

output:=

6


1 2 3 4 5 6 
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1 











