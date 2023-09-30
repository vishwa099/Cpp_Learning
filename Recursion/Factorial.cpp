#include<iostream>
using namespace std;

int factorial(int x){
    if(x==0){
        return 1;
    }

    int i=factorial(x-1);
    int j=x*i;
    return j;
}

int main(){
    int n,a;
    cout<<"Enter the value of n--> "<<endl;
    cin>>n;
    a=factorial(n);
    cout<<a<<endl;
    return 0;
}