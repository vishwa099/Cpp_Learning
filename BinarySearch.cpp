#include<iostream>
using namespace std;
int binary_search(int arr[], int n, int key){
    int s=0 ,e=n-1, mid=(s+e)/2;                              //--------Binary search can only work with monotonic arrays (either increasing or decreasing)----------------//
    while(s<=e){
        if (arr[mid]==key){
            return mid;
        }
        //-------go to the right part of the array------------//
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;

}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int index=binary_search(even,6,12);
    cout<<"Index of 12 is"<<" "<<index<<endl; 

    return 0;

}