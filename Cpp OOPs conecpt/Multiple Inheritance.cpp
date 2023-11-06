//-----here we are using two or more class attribute in a new class--//


#include<iostream>
#include<string>
using namespace std;

class Myclass{
    public:
    string parentname;
    string parentcast;
    string siblings;

};
class Mychild{
    public:
    string childname;
    string childcast;
    int childmob;
};

class GrandChild :public Myclass, public Mychild{

};

int main(){
    GrandChild pota1;
    pota1.parentname="Vishwambhar Prajapati";

    cout<<pota1.parentname<<endl;
}