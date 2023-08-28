#include<iostream>
using namespace std;
void reverse(int arr[], int n);
void print_Array();
int main(){
    int num[]={10,20,30,40,50,60};
    int n=6;
    reverse(num, n);
    cout<<endl;
    for(int i=0; i<=n; i++){
        cout<<num[i]<< " ";
    }
}

void printing(int arr[], int n){
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<endl;

    }

}

void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}