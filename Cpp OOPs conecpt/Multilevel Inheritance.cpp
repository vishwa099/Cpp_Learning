#include<iostream>
#include<string>
using namespace std;
class Myclass{
    public:
      string name;
      string cast;
      int mobileno;

};
class Mychild :public Myclass{

};

class GrandChild: public Myclass{

};

int main(){
    GrandChild vivek;
    vivek.name="harshit Saini";
    cout<<"My grandchild name is "<<vivek.name<<endl;
    
}