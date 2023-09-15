// #include<iostream>
// #include<array>
// using namespace std;
// bool isFound(int arr[][4], int target, int n, int m){
//     for(int n=0; n<3; n++){
//         for(int m=0; m<4; m++){
//             if(arr[n][m]==target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[3][4];
    
//     //----Entering the values in the 2d Arrays.-----------//
    
    
//     //taking input --> rowise input in the array---------//
//     for(int i=0;i<3; i++){
//         for(int j=0; j<4; j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<3; i++){
//         for(int j=0; j<4; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     //--applying linear search in 2d Array---------//

//     cout<<"Enter the element to be searched in the arrray:--->"<<endl;
//     int target;
//     cin>>target;

//     if(isFound(arr, target, 3,4))
//         cout<<"Target Element is present."<<endl;
//     else
//         cout<<"Target Element is not present."<<endl;

    
//     return 0;
// }


#include<iostream>
using namespace std;
void printSum(int arr[][3], int n , int m){          //--------This gives sum of rowise elements-----------//
    for(int n=0; n<3; n++){
        int sum=0;                                   
        for(int m=0; m<3; m++){
            sum+=arr[n][m];
        }
        cout<<sum<<" ";
        cout<<endl;
    }

}
void printSum1(int arr[][3], int n, int m){

    for(int n=0; n<3; n++){
        int sum=0;
        for(int m=0; m<3; m++){
            sum+=arr[m][n];
            
        }
        cout<<sum<<" ";
        
    }

}
int main(){
    int matrix[3][3];
    cout<<"Enter the entries to be done rowise;";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>matrix[i][j];
        }
        cout<<endl;
    }


    cout<<"The rowise sum of elements is:-"<<endl;
    printSum(matrix,3,3);

    cout<<endl;
    cout<<"the columnwise sum of elements is:-"<<endl;

    printSum1(matrix,3,3);

    

    return 0;
}