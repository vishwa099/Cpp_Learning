#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i=5; i<=18; i+=3){
        v.push_back(i);
    }

    cout<<"the size of the vector is:---"<<v.size()<<endl;
    cout<<"the capacity of the vector is:---"<<v.capacity()<<endl;

    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl; //------prints up the garbage value as no value is initialized in that index.
    
}