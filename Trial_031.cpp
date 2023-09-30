#include<iostream>
using namespace std;

// int* func(){                  //---------a very BAD practice------------//
//     int a=22;
//     cout<<"Hello we are returning addresss of a "<<endl;
//     return &a;
// }

int main(){

    //understanding the types of pointer----

    int a=64;
    char x=a;

    int *ptr=&a;
    char *ch=(char *)ptr;
    cout<<ch<<endl;






}