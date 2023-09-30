#include<iostream>

using namespace std;

int power(int n){

    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}

int main(){
    int n;
    cout<<"enter the power of two--- "<<endl;
    cin>>n;
    int x=power(n);
    cout<<x<<endl;

}