#include<iostream>
using namespace std;
void digitfeed(int n){
    switch(n){
        case 0: cout<<"Zero ";
        break;
        case 1: cout<<"One ";
        break;
        case 2: cout<<"Two ";
        break;
        case 3: cout<<"Three ";
        break;
        case 4: cout<<"Four ";
        break;
        case 5: cout<<"Five ";
        break;
        case 6: cout<<"Six ";
        break;
        case 7: cout<<"Seven ";
        break;
        case 8: cout<<"Eight ";
        break;
        case 9: cout<<"Nine ";
        break;
    }
}

void readOutDigit(int n){
    if(n==0){
        return;
    }
    int dig=n%10;
    n/=10;
    readOutDigit(n);
    digitfeed(dig);
    

}
int main(){
    //------example like 4321----------u have to say four three two and one;

    cout<<"enter ur number --->"<<endl;
    int n;
    cin>>n;

    readOutDigit(n);
}