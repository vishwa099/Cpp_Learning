#include<iostream>
using namespace std;
int power(){
    int a,b;
    cin>> a;
    cin>>b;
    int ans=1;
    for(int i=1; i<=b; i++){
        ans*=a;
    }
    return ans;
}
int main(){
    int k=power();
    cout<<"the power of a to the b is:-)  "<<k;
}