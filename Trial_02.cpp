#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter ur character"<<"\n"<<endl;
    cin>> ch;
    if(ch>'a' && ch<'z'){
        cout<<"U entered a lowercase letter"<<endl;
    }
    else if( ch>'A' && ch<'Z'){
        cout<<"U entered an uppercase letter"<<endl;
    }
    else{
        cout<<"U enterd a number"<<endl;
    }

}