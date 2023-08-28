#include<iostream>
using namespace std;

int main(){
    int ans=0;
    int arr1[]={1,2,3,4,5,6,7,8,9}, n=9;
    int arr2[]={2,4,7,8,14,15,16}, m=7;
    int i=0,j=0;
    while(i<n &&j<n){
        if (arr1[i]==arr2[j]){
            ans+=arr1[i];
            i++;j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else {
            j++;
        }
    }
    cout<<ans;

}