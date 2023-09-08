#include<iostream>
#include<map>
using namespace std;
int main(){
    map <int ,string> m;                  //---------Concept of MAPS it is like key value pairs in python programming-----------//
    m[1]="Vishwa";
    m[2]="Meena";
    m[3]="Datta";
    m[4]="Hello";

    m.insert({5,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<endl<<endl;
    cout<<"Finding six key in the map m:->"<<m.count(6)<<endl;
    map<int ,string> ::iterator it=m.find(2);
    //auto it=m.find(2);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*it).second<<endl;
    }

}