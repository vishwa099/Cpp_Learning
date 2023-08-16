#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cin>>n;
    int num=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<num<<" ";
            num++;
            col++;

        }
        cout<<endl;
        row++;
    }
}