#include<iostream>
using namespace std;
void alter_swap(int arr[], int n){
    for(int i=0; i<=n; i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}
int main(){
    int num[]={10,20,30,40,50,60};         // it required to be------{20,10,40,30,60,50}
    alter_swap(num, 6);
    cout<<"The swapped array is:-)"<<endl;
    for (int i=0; i<6; i++){
        cout<<num[i]<<" ";
    }

}