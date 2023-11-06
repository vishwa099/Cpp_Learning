#include<iostream>
using namespace std;

//-------implementing linear search using recursion
bool linearSearch(int arr[],int size, int key){
    if(size==0){                  //-----------this is base case when array size is zero or`
        return false;
    }
    if(arr[0]==key){
        return true;

    }
    else{
        bool remainingpart=linearSearch(arr+1, size-1, key);
        return remainingpart;
    }

}

//--------Applying concept of linear search through recursion----------//
int main(){
    int arr[]={3,5,1,2,0,9};
    int size=6;
    int key=2;
    bool ans=linearSearch(arr,size,key);

    if(ans){
        cout<<"Present"<<endl;

    }
    else{
        cout<<"not Present"<<endl;

    }



}