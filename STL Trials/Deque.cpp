#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque <char> d;
    d.push_back('a');
    d.push_front('B');
    for(char i:d)
      cout<<i<<" ";
    d.clear();

    for(char i:d)
      cout<<i<<" "<<"b";
}