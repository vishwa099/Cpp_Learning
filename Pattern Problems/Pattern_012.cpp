#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"Enter the value of row number:";
    cin>>n;
    while(i<=n){
        int a='A';
        int j=1;
        while(j<=n){
            cout<<char(a);
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
}