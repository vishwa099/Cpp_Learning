#include<iostream>
using namespace std;
bool binarySearch(int arr[], int start,int end, int key){
    if(start >end){
        return false;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1, end, key);

    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }

}


int main(){
    //---------Implementing Binary Search through recursion-----------//

    int arr[7]={2,4,6,10,12,16,19};
    int size=7;
    int key=20;

    bool ans=binarySearch(arr,0,size-1,key);

    cout<<"present or not"<<endl<<endl<<ans<<endl;



}