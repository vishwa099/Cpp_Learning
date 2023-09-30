#include<iostream>             //-----Here we are doing the revision of all types of macros that ar 4; 
using namespace std;            //------      1. Object-Like Macro        2. Chain Macro          3. Multi-Line macro        4. Function_Macro.
#define objectL "SYSTUMMM"

#define Meta Followers
#define Followers 4650

#define arr 2,\
            3,\
            4,\
            6

#define max(a,b)(a>b?a:b)

int main(){
    cout<<objectL<<endl;


    cout<<"The Vishwambhar Prajapati has "<<Meta<<" followers on facebook."<<endl;

    int arr1[]={arr};
    for (int i=0; i<4;  i++){
        cout<<arr1[i]<<endl;
    }


    cout<<max(20,45)<<endl;




    return 0;
}