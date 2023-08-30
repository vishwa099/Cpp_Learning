#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int ans[10];
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(arr[i]+arr[j]==14){
                ans[0]=min(arr[i],arr[j]);
                ans[1]=max(arr[i],arr[j]);
            }

        }
    }
    for(int i=0; i<2; i++){
        cout<<ans[i]<<endl;
    }
}