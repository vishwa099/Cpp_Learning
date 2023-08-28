//----------This is the real solution---------------//

//-----Applying constraint and Finding true solution is a very good practice---------//
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int ans=1;
    int n;
    cin>>n;
    for(int i=0;i<=30;i++){
        if(ans==n){
            return true;

        }
        if (ans<INT_MAX/2)
        ans=ans*2;
    }
    cout<<"True";
}