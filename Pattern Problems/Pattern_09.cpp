#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cout<<"Enter the row number:";
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<(row-col+1)<<" ";
            col++;
        }
        cout<<endl;
        row++;


    }
}