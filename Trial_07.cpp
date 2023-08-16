
//---------Fibonacci Sequence Using For Loop---------//
#include<iostream>
using namespace std;
int main(){
    int n=10,a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0; i<=n;i++){
        int nxtnum=a+b;
        cout<<nxtnum<<" ";
        a=b;
        b=nxtnum;


    }


}