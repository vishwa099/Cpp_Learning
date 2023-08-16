
//-----------------find the sum of all even/odd numbers between 1 to given number-----------------//
#include<iostream>
using namespace std;
int main(){
    int n,n1=1,sum_odd=0,sum_even=0;
    cout<<"Enter the limiting number"<<endl;
    cin>>n;
    while(n1<=n){
        if(n1%2==0){
            sum_even+=n1;
        }
        else{
            sum_odd+=n1;
        }
        n1++;
    }
    cout<<"the sum of even numbers between 1 to given number is\t"<<sum_even<<endl;
    cout<<"the sum of odd numbers between 1 to given numberis\t"<<sum_odd<<endl;


}