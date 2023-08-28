//----------Use of exit() keyword from exiting out of infinite loop------------------//
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter ur number:-";
    cin>>n;
    while(1){
        switch(n){
            case 1 : cout<<"first";

                    exit(0);
            case 2 : cout<<"Second"<<endl;
                   exit(0);
            case 3 : cout<<"Third";
                   exit(0);
        }

    }
}