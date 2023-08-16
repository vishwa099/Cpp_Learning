#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter ur number:-)"<<endl;
    cin>>n;
    int digit_sum=0, digit_mul=1, diff=0;
    int *ptr1=&digit_sum;
    int *ptr2=&digit_mul;
    while(n!=0){
        int digit=n%10;
        *ptr1+=digit;
        *ptr2*=digit;
        n/=10;

    }
    cout<<"the difference between digits sum and their multiplication is:"<<-(digit_sum-digit_mul)<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2;

}