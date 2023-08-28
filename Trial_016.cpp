#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;
    cout<<"Enter the operation"<<endl;
    char opera;
    cin>>opera;
    switch(opera){
        case '+': cout<<"The sum is :"<<a+b;
                break;
        case '-': cout<<"The difference a-b is "<<a-b;
                break;
        case '*': cout<<"The multiplication is "<<a*b;
                break;
        case '%': cout<<"The remainder by dividing a/b is"<<endl<<a%b;
                break;
        case '/': cout<<"The division of a/b is:-)"<<endl<<a/b;

    }
}