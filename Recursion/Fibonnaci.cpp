#include<iostream>
using namespace std;

int fib(int n){
    if(n==1 || n==0){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"Enter ur number :------> "<<endl;
    cin>>n;
    int x=fib(n);
    cout<<x<<endl;
}