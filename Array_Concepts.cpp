#include<iostream>
#include<limits.h>
using namespace std;
int max(int arr[],int n);
int min(int arr[],int n);
void printing_array(int arr[], int n);

int main(){
    int num[100];
    int n;
    cout<<"Enter the number u want to store in array:-)";
    cin>>n;

    for (int i=1; i<=n; i++){
        cin>>num[i];
    }
    //cout<<"you have entered the following numbers in ur array:"<<endl;
    //printing_array(num, n);
    int maximum=max(num, n);
    cout<<"The maximum number is:-)"<<max(num,n)<<endl;
    int minimum=min(num, n);
    cout<<"the minimum number is:-)"<<minimum<<endl;




}
void printing_array(int arr[], int n){
    for (int i=1; i<=n; i++){
        cout<<arr[i]<<endl;
    }
}
int max(int arr[], int n){
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        maxi=max(maxi, arr[i]);
    }
    return maxi;
}
int min(int arr[], int n){
    int min=INT_MAX;
    for(int i=0; i<n; i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    return min;

}