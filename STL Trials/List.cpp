#include<iostream>
#include<list>
using namespace std;
int main(){                                                //------------Concepts of Linked Lists which have pointer at both the sides of it---//
    list <int> n(5,100);
    //for(int i:n)
    //   cout<<i<<" ";
    n.push_back(45);
    n.push_front(56);
    cout<<endl;
    cout<<n.front()<<endl;
}