

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int row=0; row<n; row++){
        //half pyrmind
        for(int col=0; col<n-row; col++){
            cout<<"*";

        }
        //space wlaa full purmid
        for(int col=0; col<2*row+1; col++){
            cout<<" ";

        }
        //half pyramid
        for(int col=0; col<n-row; col++){
            cout<<"*";

        }
        cout<<endl;
    }
}

int n;
    cin>>n;

    for(int row=0; row<n; row++){
        //half pyrmind
        for(int col=0; col<row+1; col++){
            cout<<"*";

        }
        //space wlaa full purmid
        for(int col=0; col<2*n-2*row-1; col++){
            cout<<" ";

        }
        //half pyramid
        for(int col=0; col<row+1; col++){
            cout<<"*";

        }
        cout<<endl;
    }
// output



*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * * 

int main (){
    int n;
    cin>>n;

    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<row+1;
            if(col !=row)
               cout<<"*";

        }
        cout<<endl;

    }
}

output::

5
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5

for(int row=0; row<n; row++){

    for(int col=0; col<n-row; col++){
        cout<<n-row;
        if(col !=n-row-1)
           cout<<"*";

    }
    cout<<endl;
}

output::


1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1




int n;
cin>>n;

for(int row=0; row<n; row++){
    
    int col;
    for(col=0; col<row+1; col++){
        cout<<col + 1;

    }
    col= col - 1;
    //reverse counting printing
    for(; col>=1;col++){
        cout<<col;

    }
    cout<<endl;
}


output::

5

1
121
12321
1234321
123454321



int main(){
    int n;
    cin>> n;
    for(int row=0; row<n; row++){
        int col;
        for(col=0; col<row+1; col++){
            int ans = col +1;
            char ch = ans + 'A' -1;
            cout<<ch;

        }
        //reverse couting printing'
        for(int col=row; col>=1; col++){
            int ans = col;
            char ch = ans + 'A'-1;
            cout<<ch;

        }
        cout<<endl;

    }
}

output::
5

A
ABA
ABCBA
ABCDCBA
ABCDCBA
ABCDEDCBA

