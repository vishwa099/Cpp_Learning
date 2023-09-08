#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr1[]={1,2,3,4};
    array<int, 5> arr2={4,5,6,7,8};
    cout<<"the size of the array is-->"<<arr2.size()<<endl;
    cout<<"the front and the end of the array is "<<arr2.front()<<" "<<arr2.back()<<endl;
    cout<<"element at third index is--->"<<arr2.at(3)<<endl;
    cout<<"checking the emptyness of the array-->"<<arr2.empty()<<endl;
}