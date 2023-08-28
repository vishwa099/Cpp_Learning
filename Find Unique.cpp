#include<iostream>
using namespace std;
int main(){
    int ans=0;
    int n=7;
    int arr[]={1,2,3,2,3,4,4};
    for(int i=0; i<=n; i++){
        ans^=arr[i];
    }
    cout<<ans;
    return 0;

}