#include<iostream>
using namespace std;
int main(){
    
    char ch[]="Vishwambhar Prajapati";
    char *ptr=&ch[5];           

    cout<<ptr<<endl;            //---prints the entire character array-------//
    cout<<endl;
    cout<<ch<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;

    
    return 0;
}