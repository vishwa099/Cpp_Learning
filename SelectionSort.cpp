#include<iostream>
using namespace std;
int selectionSorting(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        int min_index=0;
        for(int j=0; j<n; j++){
            if(arr[min_index]>arr[j]){
                swap(arr[min_index],arr[j]);
                min_index=arr[i];
            }
            else{
                ;

            }
        }
    }

}
int main(){
    int n=8;
    int nums[]={10,13,8,7,45,36,23,45};
    selectionSorting(nums, n);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }

}