#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool matrixmedhundo(int arr[5][5], int target){
    for(int i=0; i<5; i++){
        int start=0;
        int end=4;
        int mid=2;
        while(start<=end){
            if (arr[i][mid]==target){
                 return true;
        }
            if(target>arr[i][mid]){
                start=mid+1;
        }
        
            else{
                end=mid-1;
        }
            mid=(start+end)/2;
    }
    }
    return false;
}


int main() {
    
    int box[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>box[i][j];
            
            
        }
    }
    int key;
    cout<<"Enter the target key: - "<<endl;
    cin>>key;
    //--------using binary search for each row as each row is monotonic in nature (given)
    bool ans=matrixmedhundo(box,key);
    if(ans){
        cout<<"Given key is present"<<endl;

    }
    else{
        cout<<"Given key is not present"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
