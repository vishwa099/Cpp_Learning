#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    cout<<"Enter the limiting row:";              //---------This is a triangular pattern;
    cin>>n;
    
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<char('A'+i-1);
            j++;
        }
        cout<<endl;
        i++;
    }

}