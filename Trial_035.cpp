#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    int a=10;
    int *ptr=&a;

    char *p;
    p=(char *)&a;

    cout<<p<<endl;
    printf("%d",*p);
    cout<<ptr<<endl;



}