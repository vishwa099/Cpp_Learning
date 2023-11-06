#include<iostream>
using namespace std;

int getsum(int *arr, int size){////////------Using Recursion to Calculate the sum of given elements;------/
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingpart=getsum(arr+1, size-1);
    int sum=arr[0]+remainingpart;
    return sum;

    
}
int main(){
    int arr[]={3,2,3,4,5};
    int size=5;
    int ans=getsum(arr,size);
    cout<<"Summation of the array elements is----> "<<ans<<endl;



    return 0;
}