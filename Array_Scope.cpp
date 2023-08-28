#include<iostream>
using namespace std;
void update_array(int arr[],int n){
    cout<<"after updation it looks like-";               //--------------Concept of Reference by address-----------//
    arr[2]=45;
    for(int i=0; i<9; i++){
        cout<<arr[i]<<"\t";
    }
    
}

int main(){
    int num[]={1,2,3,4,5,6,7,8,9};
    for(int i=0; i<9; i++){
        cout<<num[i]<<"\t";
    }
    update_array(num,1);
    


}