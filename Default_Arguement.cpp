#include<iostream>
using namespace std;
void func(int x=98){               //-----for default argument just initilize the variable with the value-------//
    cout<<x+2<<endl;
}
int main(){
    func(33);
}