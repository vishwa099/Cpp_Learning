#include<iostream>
using namespace std;
int firstocc(int arr[], int n, int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid=s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;


        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s + (e-s)/2;
    }
    return ans;
}
int lastocc(int arr[], int n, int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid=s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;;
        }
        else if(key>arr[mid]){
            s=mid+1;


        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s + (e-s)/2;
    }
    return ans;
}
int main(){
    int num[]={1,2,3,3,3,3,3,3,3,4};
    int a =firstocc(num,10,3 );
    int b=lastocc(num, 10,3);
    cout<<firstocc(num,10,3 )<<endl;
    cout<<lastocc(num, 10,3)<<endl;
    cout<<"NO. of 3's in array is:-)"<<endl<<b-a+1<<endl;

}