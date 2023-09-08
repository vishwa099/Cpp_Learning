#include<iostream>
#include<vector>
using namespace std;

bool check(vector <int> &num){          //------u can also observe here that how to pass a vector to the function-----------//
    int count=0;
    int n=num.size();
    for(int i=0; i<=n; i++){
        if(num[i-1]>num[i]){
            count++;
        }
    }
    if(num[n-1]>num[0])
       count++;

    return count>=1;
}
int main(){
    vector <int> arr(5);
    arr[0]=3;
    arr[1]=4;
    arr[2]=5;
    arr[3]=1;
    arr[4]=2;
    //swap(arr[0],arr[4]);
    //swap(arr[1],arr[3]);
    if(check(arr)==true){
        cout<<"The rotated and sorted array is:- "<<endl;
        for(int i:arr){
            cout<<i<<" ";
        }
    }
    else
       cout<<"The array is not rotated or sorted."<<endl;
    
}