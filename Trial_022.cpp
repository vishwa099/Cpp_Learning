

//--------------revision of binary search----------------------//

#include<iostream>
using namespace std;
int binary_srch(int arr[], int n, int key){
    int s=0;
    int e=n-1, mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if( key>arr[mid]){
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
    int num[]={1,2,3,6,8,9,14,15,17,20};
    cout<<binary_srch(num, 10, 6);


}