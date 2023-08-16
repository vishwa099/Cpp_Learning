#include<iostream>
using namespace std;             //-----Pattern is somwwhat looks like this----------//
int main(){                      //           321
    int n,i=1;                   //           321
    cin>>n;                      //           321
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;

    }
}