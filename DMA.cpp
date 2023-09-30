#include<iostream>
using namespace std;                       //----------Using DYNAMIC MEMORY ALLOCATION----Using  HEAP Memory-------//

void getSum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"the summation of the elements which were stored in the heap memory is -->> "<<sum<<endl;
}

int main()
{
     
     //---for example if u want to create varible size array means at run time u want to create the known size array exact
     //---then what will u do -- this is u do for it

     int n;
     cout<<"Enter the size of the array to be created at the run time:--->"<<endl;
     cin>>n;

     int *arr=new int [n];              //---This DMA initialization take up the size (1 pointer of size 8 byte and n*4 for ints in the array)
                                        //----- this total take the size  8+n*4 bytes;
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }

     getSum(arr,n);

     


    
    
    
    
    return 0;
}