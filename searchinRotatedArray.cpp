
//-----------revision question----------------//

#include<iostream>
using namespace std;
int getPivot(int arr[], int n){
    int s=0, e=n-1, mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binary_search(int arr[], int s,int e, int key){
    int start=s ,end=e, mid=(start+end)/2;                              //--------Binary search can only work with monotonic arrays (either increasing or decreasing)----------------//
    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        //-------go to the right part of the array------------//
        if(key>arr[mid]){
            start=mid+1;
        }
        //-------go to the left part of the array--------------//
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}
int findPosition(int arr[], int n, int k){
    int pivot=getPivot(arr,n);
    if(k>arr[pivot] && k<=arr[n-1]){
        return binary_search(arr, pivot, n-1, k);
    }
    else{
        return binary_search(arr, 0, pivot-1, k);
    }
}
int main(){
    int num[5]={3,8,10,17,1};
    cout<<findPosition(num, 5, 17)<<endl;
    

}