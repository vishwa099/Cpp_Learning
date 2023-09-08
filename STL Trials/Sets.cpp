//---Working with sets and understanding the working of iterators of sets-------//
//----sets always returns sorted values from it-----//
#include<iostream>
#include<conio.h>
#include<set>
using namespace std;
int main(){
    set <int> s;
    for(int i=0; i<=9; i++){
        s.insert(i);
    }
    
    //for(auto i:s){
        //cout<<i<<" ";
    //}
    //cout<<endl;

    //set <int> ::iterator it =s.begin();
    //it++;
    //s.erase(it);
    
    set<int> ::iterator itr=s.find(5);

    for(auto it=itr ; it!=s.end(); it++){
        cout<<*it<<" ";

    }
        
    cout<<endl;
    cout<<s.size()<<endl;
    
}