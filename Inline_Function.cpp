#include<iostream>
using namespace std;

inline int check(int x, int y){
    //-----Here we are using the inline function---
    //---It not uses any stack or heap space to run 
    //----it replaces the function call with it's expression at all the places where it has been called
    int k=x>y?x:y;
    return k;
}
int main(){


    int a=20,b=40;
    int max=check(a,b);
    cout<<max<<endl;
    return 0;
}