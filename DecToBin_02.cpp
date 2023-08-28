#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;

    int digit=n& 1, i=0;
    while(n!=0){
        ans=(digit*pow(10,i)) + ans;
        n=n>>1;
        i++;
    }
    cout<<"Binary form is:-)"<<ans<<endl;
    return 0;


}