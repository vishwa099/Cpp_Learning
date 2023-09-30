

//--------using static variable---------//
//---------varible memory me rhega after exiting out the block and when again block executes it continues with with the previous value of variable-----//

#include<iostream>
using namespace std;
void fuc(){
    register int a=10;            //--------memory stack wala variable bn gya hai one time clear after execution of the function ---------//
    ++a;
    cout<<a<<endl;
}
int main(){
    fuc();
    cout<<"trying to print the value of a in main scope-->>"<<a<<endl;    //----u can't do this ------//

    // cout<<a<<endl;

    return 0;
}