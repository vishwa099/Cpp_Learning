#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter ur row number:";
    cin>>n;
    int a='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<char(a);
            j++;
        }
        cout<<endl;
        a++;
        i++;

    }
}



//------this can also be done through 'A'+i-1 observation----------//