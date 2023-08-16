#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter ur limting row:";
    cin>>n;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=(n-i+1)){
            cout<<"*";
            j++;
        }
        
        cout<<endl;
        i++;
    }
}