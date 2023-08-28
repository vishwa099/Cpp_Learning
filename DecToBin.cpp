#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,ans=0,i=0;
    cin>>n;
    while(n!=0){
        int bit=n &1;                   //-----It takes logical and of number's rightmost bit and with 1--------//
        ans+=(bit*pow(10,i));                     //-----Observed a concept---------//
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}