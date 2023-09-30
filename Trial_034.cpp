//-----------Revision of Pointers-----------//


#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    int a=24;
    unsigned long int *b=&a;
    int *ptr=&a;
    int **b=&ptr;

    cout<<&a<<endl;
    printf("%u\n\n",&a);
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;




}