//-----We are converting decimal number system to binary system using recursion

#include<iostream>
using namespace std;
void f(int x){
    if(x==1 || x==0){
        cout<<x;
        
        
        
    }
    else{
        
        f(x/2);
        cout<<x%2;
        return;
        
    }

}
int main(){
    int n;
    cout<<"Enter the decimal number that u want to convert in binary system:--- "<<endl;
    cin>>n;
    f(n);
    return 0;
}