#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter ur number:-)";
    cin>>n;
    if(n%2==0){
        int count=1;
        while(n!=2){
            int ans=n/2;
            n=ans;
            count++;



        }
        cout<<"The given number is expressed "<<count<<" in the power of two."<<endl;
    }
    else{
        cout<<"Given number is odd.";
    }

}