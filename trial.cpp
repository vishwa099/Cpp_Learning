#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void sort(int arr[], int k){
    for(int i=0; i<k; i++){
        for(int j=0; j<k-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    int loons[n];
    for(int i=0; i<=n;i++){
        cin>>loons[i];
    }
    sort(loons,n);
    int score=0;
    int marker[n];
    
    while(marker[0]!=0){
          for(int i=n; i>=0; i--){
             marker[i]=0;
              int var1=i-1, var2=i+1;
               if(i+1>n){
                  var1=1;
           }
               else if(i-1<0){
                  var2=1;
        }
            score+=loons[var1] * loons[i] * loons[var2];
        
    }
    }
    cout<<score<<endl;
    
    
    return 0;
}
