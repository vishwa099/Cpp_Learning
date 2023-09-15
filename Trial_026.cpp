#include<iostream>
using namespace std;
int main(){
    int num=20, *ptr=&num;
    
    int *a=ptr;
    //cout<<"the value of a is  "<<a<<endl;
    //(*ptr)=55;
    //cout<<"after changing the value of num is  "<<a<<endl;

    cout<<"the value of ptr is --->"<<&a<<endl;
    cout<<"the adress of num variable is "<<&ptr<<endl;
    cout<<"the address of num vaiable is "<<&num<<endl;

    //--Doing some arithematics operation with pointers---//


    a=a+1;
    cout<<"after arithematic operation on pointer a "<<a<<endl;
    a-=1;
    cout<<"after reversing the operation "<<a<<endl;
    a-=1;
    cout<<"after reversing one more step "<<a<<endl;




    return 0;
}