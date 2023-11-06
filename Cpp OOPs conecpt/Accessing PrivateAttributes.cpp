#include<iostream>
#include<string>
using namespace std;

class Myclass{
    private:
      string name;
      string cast;  //-----Now we are trying to read and write a private attribute through the public specifier.
    public:
      //Setter
      void doSomething(string namo){
        name=namo;
      }

      string getting(){
        return name;
      }

};
int main(){
    Myclass obj1;
    obj1.doSomething("Vishwa");
    cout<<"The name written through public in private varibale is "<<obj1.getting()<<endl;



}