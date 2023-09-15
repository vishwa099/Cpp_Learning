

//-----------working with pointers in cpp language-----------/
#include<iostream>
using namespace std;
int main(){
                                         //--initializing a pointer ptr
    int num=23;
    int *ptr=&num;
    char name='o';
    char *ptr1=&name;

    cout<<"the adress of num variable is--->"<<&num<<endl;
    cout<<"the adress  that pointer ptr is storing is:--->"<<ptr<<endl;
    cout<<"the value printed by the value at adress operrator (deadress operator)-->"<<*ptr<<endl;

    cout<<"the size of ptr of num is "<<sizeof(ptr)<<endl;
    cout<<"the size of char ptr is "<<sizeof(ptr1)<<endl;





    return 0;
}