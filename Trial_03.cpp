

//-----------------Find sum of n natural numbers---------------//

#include<iostream>
using namespace std;
int main(){
    int n,n1=1,sum=0;
    cout<<"Enter the number upto which u want summation"<<endl;
    cin>>n;
    while(n1<=n){
        sum+=n1;
        n1++;
    }
    cout<<"The sum is:\t"<<sum<<endl;
    return 0;

}