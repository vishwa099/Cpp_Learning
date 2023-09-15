
//------Remove all duplicates in a string------------//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter ur string to do operation of (Remove all duplicates in a string)-->"<<endl;
    cin>>str;

    for(int i=0; i<str.length()-1; i++){
        if(str[i]==str[i+1])
            str.erase(i,i+1);

    }

    cout<<"after operating it--->"<<endl;
    cout<<str<<endl;



    return 0;
}