#include<iostream>
#include<limits.h>

using namespace std;
int reverse_int(int n);
int main(){
    int x;

    cout<<"Enter the number to reverse it."<<endl;
    cin>>x;
    cout<<"Your reveresed integer is:-)"<<endl<<reverse_int(x)<<endl;

}

int reverse_int(int n){
    int ans=0;
    while(n!=0){
        int digit=n%10;
         if((ans>INT_MAX / 10) || (ans<INT_MIN / 10)){
         return 0;
         
     }
        ans=(ans*10)+digit;
        n=n/10;


    }
    return ans;
}