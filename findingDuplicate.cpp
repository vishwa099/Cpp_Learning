#include<iostream>
using namespace std;
int main(){
    int ans=0;
    int arr[8]={1,2,3,4,5,7,5,6};
    for(int i=0; i<=arr.size(); i++){
        ans=ans^arr[i];
    }
    // XOR [1, n-1];
    for( int i=1; i<arr.size(); i++){
        ans^=i;
    }
    cout<<ans;

    
}