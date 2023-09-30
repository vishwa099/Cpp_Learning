#include<iostream>
using namespace std;

bool isSorted(int *arr,int i){
    if(sizeof(arr)/4==i){
        return true;
    }
    return isSorted(arr, i+1) && i<sizeof(arr)/4; 

}
int main(){
    int num[]={2,4,12,7,8,9};
    bool a=isSorted(num,0);
    cout<<a<<endl;


}