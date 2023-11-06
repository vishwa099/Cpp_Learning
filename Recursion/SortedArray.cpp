#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;

    }
    else{
        bool remainingpart=isSorted(arr+1,size-1);
        return remainingpart;
    }
}
int main(){

    int arr[]={2,4,20,7,9};
    bool ans=isSorted(arr,5);
    if(ans){
        cout<<"ur array is sorted"<<endl;

    }
    else{
        cout<<"ur array is not sorted"<<endl;
    }

}