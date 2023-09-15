#include<string>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s1="My name is Vishwambhar Prajapati.";
    string s2="name";
    //s1.erase();
    cout<<s1<<endl;
    int a=s1.find(s2);
    
    cout<<a<<endl;
    int b=strlen("vishwa");
    cout<<b<<endl;
    string s3;
    strcpy(s3,s2);
    cout<<s3;

    
    cout<<s1;
    return 0;

}