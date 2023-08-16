//-------------in this series we are drawing some interesting patterns that boost up our loop concepts and if-else conditions----------//
 
//-----------Draw a simple 5x5 star matrix---------//
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while (j<=n){
            cout<<"$";
            j++;
        }
        cout <<endl;
        i++;
    }
}