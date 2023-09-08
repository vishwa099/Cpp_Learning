#include<iostream>
#include<stack>
using namespace std;
int main(){                        //----Stack works on LIFO Principle (Last in first out)---------//
    stack <string> s;
    s.push("Vishwa");
    s.push("hello");
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<s.empty()<<endl;
}