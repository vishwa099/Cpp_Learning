#include<iostream>
using namespace std;
bool linear_search(int arr[], int n, int element){
    for(int i=1; i<=n; i++){
        if (arr[i]==element){
            return 1;
        }
    }
    return 0;

}
int main(){
    int element=22;
    int num[40]={1,2,3,4,5,6,7,8,9};
    
    cout<<linear_search(num, 9, 8);
}