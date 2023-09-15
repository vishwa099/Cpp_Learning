// #include<iostream>
// using namespace std;
// int main(){
//     //----working with array pointer

//     //--array name will itselfvvvector

//     int arr[10]={23,2,3,4,5,6,7,10,8,9};
//     cout<<"the adress of array's oth location is:---->"<<arr<<endl;
//     cout<<"the adress of array's oth location is:---->"<<&arr[0]<<endl;
//     cout<<"address of 2 in the maded array --->"<<&arr[1]<<endl;
//     cout<<"the value of  arra at the second array is-->"<<*(arr+1)<<endl;
//     cout<<"the second one is: "<<*(arr+3)<<endl;

//     //---secret syntaxx

//     cout<<5[arr]<<endl;
//     int a=5[arr]==*(arr+5)?23:45;        //here i used ternary operator
//     cout<<a;
    



//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    
    double temp[]={0};
    double *ptr=&temp[0];
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*ptr)<<endl;
    
    
    
    
    return 0;
}

















