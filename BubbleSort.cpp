#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=1; i<n; i++){
        bool swapped=false;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped= true;
            }
        }
        if(swapped==false){
            cout<<"dont swapped anything it's already in place for u";
            break;
        }
    }

    }
int main(){
    int num[]={10,20,30,40,50};
    int n=5;
    bubbleSort(num, n);
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }

}