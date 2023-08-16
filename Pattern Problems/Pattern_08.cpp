#include<iostream>
using namespace std;
int main(){
    int row=1, n;
    cout<<"Enter ur row number:"<<endl;
    cin>>n;
    while(row<=n){
        int col=1;
        int value=row;
        while(col<=row){
            cout<<value<<" ";
            value++;
            col++;

        }
        cout<<endl;
        row++;

        
    }

}