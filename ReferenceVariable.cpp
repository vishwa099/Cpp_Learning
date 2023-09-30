#include<iostream>
using namespace std;
int main(){

    int vishwambhar=22;
    int &vishu=vishwambhar;          //----------This is the concept of Reference Variable-----------//

    cout<<"printed the value of vishwambhar form vishwambhar variable"<<vishwambhar<<endl;
    cout<<"printed the value of vishwambhar from it's short name vishu "<<vishu<<endl;

    return 0;
}