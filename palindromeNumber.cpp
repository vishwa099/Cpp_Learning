#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(int x){
    //-----------u have to make a funciton without converitng integer to the string.-----------//
    int ans=0;
    int copy=x;
    while(copy!=0){
        int digit=x%10;
        ans=(ans*10)+digit;
        copy/=10;

    }
    if(ans==x)
        return 1;
    else
       return 0;
}
int main(){
    cout<<isPalindrome(121)<<endl;

}