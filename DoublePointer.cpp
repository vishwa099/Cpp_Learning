#include<iostream>
using namespace std;                  //----Conecpt of Double pointers-----//
int main(){

    int i=5;
    int *ptr=&i;
    int **ptr1=&ptr;
    int ***ptr2=&ptr1;

    cout<<"the value of ptr is--> "<<ptr<<endl;
    cout<<"the address of ptr is-->"<<&ptr<<endl;
    cout<<"the adress of i is-->"<<&i<<endl;

    cout<<"again the value of addresss of ptr is-->"<<ptr1<<endl;
    cout<<"the addresss of ptr1 is "<<&ptr1<<endl;
    cout<<"and the value stored in ptr2 is ptr1's address-->"<<ptr2<<endl;

    //----ways of printing the value of variable from double pointers;


    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;


    return 0;
}