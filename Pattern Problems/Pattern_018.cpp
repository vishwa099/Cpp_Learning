#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"Enter the limiting number:-";
    cin>>n;
    int value='A'+n-1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<char(value);
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}