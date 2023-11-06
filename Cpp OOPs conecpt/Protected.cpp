#include<iostream>
#include<string>
using namespace std;

class Myclass{
    protected:
    string sex;
    public:
    void soSomething(){
        sex="Male";
    }
    string getting(){
        return sex;
    }

      
};

int main(){

    Myclass obj1;
    obj1.soSomething();
    cout<<obj1.getting()<<endl;
    return 0;

}