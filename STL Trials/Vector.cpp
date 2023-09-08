#include<iostream>
#include<vector>
using namespace std;
int main(){
    //intializing a new vector//
    vector <int> v;                // intialized with size 5 with all values 1 if not defined 1 it will default intialises with zero.
    for(int i:v){
        cout<<i;
    }
    //v.push_back(3);
    for(int i=0; i<=10; i++){
        v.push_back(i);
    }
    cout<<endl;
    cout<<"Size of the vector after entering the values in it. "<<v.size()<<endl;
    cout<<"The capacity of the created vector is---> "<<v.capacity()<<endl;
    //v.push_back()
    //v.clear();
    //cout<<"Size of vector after clearing it-->"<<v.size()<<endl;
    for(int i:v){
        cout<<i<<endl;
    }
    cout<<"peeking at the front element of the vector v:---->>"<<v.front()<<endl;
    cout<<"peeking at the back of the vector v--->"<<v.back()<<endl;
    
    cout<<"Creating the copy of the vector to the new vector v1---->"<<endl;
    vector <int> v1(v);
    cout<<"Printing out the element of the newly created vector is-->>"<<endl;
    v1.pop_back();
    for(int i:v1)
      cout<<i<<" ";



    
    
}