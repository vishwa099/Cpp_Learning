#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter ur row number";
    cin>>n;
    while(i<=n){
        int j=1,a='A';

        while(j<=n){
            cout<<char(a)<<" ";
            j++;
            a++;

        }
        cout<<endl;
        i++;

    }
}