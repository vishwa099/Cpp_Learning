//-------Here i am using the inheritance concept--------//


#include<iostream>
#include<string>
using namespace std;

class parent{
    public:
      string brand="Ford";
      string model="Masuka FF";
      int l;

};

class child: public parent{
    public:
      string owner;
      string partner;


};

int main(){
    child car1;
    car1.brand="KuttaKat";   //-Here u can see that class child is also using the attributes of class parent by inheritance.
    car1.owner="Vishwa";

    cout<<"the owner of "<<car1.brand<<" is "<<car1.owner<<endl;

}