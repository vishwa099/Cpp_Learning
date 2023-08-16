#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter ur limiting row:";
    cin>>n;
    int a='A';
    while(i<=n){
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