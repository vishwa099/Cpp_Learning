#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<=5; i++){                               //-----U can observe here the working of break and continue keywords----------//
        for (int j=i; j<=5; j++){
            if(i+j==7){
                continue;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}