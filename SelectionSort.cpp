#include<iostream>
using namespace std;
void selectionSorting(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        int min_index=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
            swap(arr[i],arr[min_index]);
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