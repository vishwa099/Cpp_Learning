#include<iostream>
#include<string>
using namespace std;

class Myclass{
    public:
       string name;
       string captcha;
       int z;
    private:
    int x;

    //    Myclass(string x, string y, int z){//---------this is the definition of constuctor inside the class.
    //     name=x;
    //     captcha=y;
    //     z=z;

    //    }
    Myclass(string x, string y, int k);


      
       
      
};

Myclass :: Myclass (string x="vishwa" , string y="d84jd", int k=34){//------this is the definition of the function outside the class.
    name=x;
    captcha=y;
    z=k;

}


int main(){
    Myclass obj1("vishwa","y4hy",45);
    Myclass obj2("uday","3hdy8",55);
    Myclass obj3;
    obj3.z=44;

    cout<<obj1.captcha<<endl;
    cout<<obj2.name<<endl;
    return 0;
}