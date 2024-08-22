



#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;


    for(int row=0; row<n; row++){
        //space
        for(int col=0; col<n-row-1; col++){
            cout<<" ";

        }
        //stars
        for(int col=0; col <row+1; col++){
            cout<<"* ";

        }
        cout<<endl;
    }
}


output:=



6

     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * * 




int main(){
    int n;
    cin>>n;

    for(int row=0; row<n; row=row+1){
        //space 
        for(int col=0; col<row; col++){
            cout<<" ";

        }
        //stars
        for(int col=0; col<n-row; col++){
            cout<<"* ";

        }
        cout<<endl;

    }
}

output :=

5

* * * * * 
 * * * *
  * * *
   * *
    *






    //full pyraind + inverted pyraimmid ko miss kar ne ke bat aata hai


    
//full pyraid
    for(int row=0; row<n; row++){
        //space
        for(int col=0; col<n-row-1; col++){
            cout<<" ";

        }
        //stars
        for(int col=0; col <row+1; col++){
            cout<<"* ";

        }
        cout<<endl;
    }
}

for(int row=0; row<n; row=row+1){
        //space 
        for(int col=0; col<row; col++){
            cout<<" ";

        }
        //stars
        for(int col=0; col<n-row; col++){
            cout<<"* ";

        }
        cout<<endl;

    }
}

output :=

  

      * 
     * * 
    * * *
   * * * *
  * * * * *
   * * * *
    * * *
     * *
      *


      //hollow diamand


      for(int row=0; row<n; row++){

        //spacee 
        for(int col=0; col<n-row-1; col++){
            cout<<" ";

        }
        //stars
        for(int col=0; col<2*row+1; col++){
            //if first character or if 
            if(col == o){
                cout<<"* ";

            }
            else if(col == 2*row){
                //last character
                cout<<"*  ";

            }
            else{
                cout<< " ";

            }
        }
      }


output:=

5


        * 
      *   *
    *       *
  *           *
*               *


for(int row=0; row<n; row++){
    //space 
    for(int col=0; col<row; col++){
        cout<<" ";

    }
    //star
    for(int col=0; col<2*n-2*row-1; col++){
        //if frist or last character
        if(col == 0 || col == 2*n - 2*row-2){
            cout<< "*";

        }
        else {
            cout<<" ";

        }
    }
    cout<<endl;
}

output:=

*               *   
  *           * 
    *       *
      *   *
        *


        