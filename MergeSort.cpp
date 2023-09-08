
//----------------Merge two sorted array and also the merged array is also sorted------------------//
//----------Given two sorted arrays arr1 and arr2 u have to merge them in a sorted way----------//
#include<iostream>
#include<vector>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void merge(int arr1[], int n, int arr2[], int m, int arrnew[]){
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arrnew[k++]=arr1[i++];

            
        }
        else{
            arrnew[k++]=arr2[j++];
        }
    }
    while(j<m){
        arrnew[k++]=arr2[j++];
    }
    while(i<n){
        arrnew[k++]=arr1[i++];
    }

}
int main(){
    int num1[]={1,3,5,7,9,11,12};
    int num2[]={2,4,6};
    int newarr[10]={0};
    //cout<<"Here comes the program:"<<endl;

    merge(num1,7, num2, 3, newarr);
    print(newarr,10);
    //cout<<"Here comes the program:"<<endl;
    return 0;
}