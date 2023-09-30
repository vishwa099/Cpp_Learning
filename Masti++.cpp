#include<iostream>
using namespace std;
int main(){

    char ch[]="vishwa";
    char *p=ch;
    cout<<ch[0]<<" "<<p[0]<<endl;
    cout<<p<<endl;

    int a=34;
    int *ptr=&a;
    cout<<ptr<<endl;



    return 0;
}