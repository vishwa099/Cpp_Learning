#include<iostream>
using namespace std;
int main(){
    int n=6;
    char arr[]="python";
    int i=0; 
    while(i<=n){
        int j=0;
        while(j<=i){
            cout<<arr[j];
            j++;
        }
        cout<<endl;
        i++;
    }
    int k=0;
    while(n-1>k){
        int m=0;
        while(m<n-1){
            cout<<arr[m];
            m++;
        }
        cout<<endl;
        n--;
    }
}