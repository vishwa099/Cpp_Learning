#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,1};
    int n=4,s=0, e=n-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid = (s+e)/2;
    }
    cout<<arr[mid];
}