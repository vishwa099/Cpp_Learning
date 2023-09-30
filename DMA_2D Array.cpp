#include<iostream>
using namespace std;
int main(){
    //-----here we are creating a two-dimensional array in heap memory
    //-----which is called Dynamic Memory Allocation
    int n;
    cout<<"Enter the value of n:-->> "<<endl;
    cin>>n;
    int m=4;
    //---main logic of the program.
    int **arr=new int *[n];
    for(int i=0; i<n; i++){  //------this runs a loop for number of rows---->>
        arr[i]=new int [m];
    }
    return 0;

}