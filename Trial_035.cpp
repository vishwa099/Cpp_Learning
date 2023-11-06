#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
#include<queue>

using namespace std;
void bubbleSorting(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }



}
int main(){
    int num[]={20,45,89,65,32,78};
    int n=5;
    bubbleSorting(num, n);
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }


    return 0;
}