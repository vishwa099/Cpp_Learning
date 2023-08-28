//-------------Trial of FUNCTIONS-------------------//

#include<iostream>
using namespace std;
int power(int a ,int b){
    int ans;
    for (int i=1; i<=b; i++){
        ans*=a;
    }
    return ans;
}
int main(){
    int x=0,y=0;
    cout<<"Enter the number and it's power:-) ";
    cin>>x>>y;
    int ans=power(x,y);
    cout<<"The x to the power y is:-)"<<endl<<ans;
    return 0;
}

