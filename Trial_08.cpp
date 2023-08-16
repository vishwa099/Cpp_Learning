#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number::";
    cin>>n;
    for(int i=2; i<n;i++){
        if(n%i==0){
            cout<<"The entered number is not prime.";
            break;
        }
        else{
            cout<<"The entered number is prime.";
        }
    }
}