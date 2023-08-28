
// //----------Program for finding the value of nCr------------------//
// #include<iostream>
// using namespace std;
// int factorial(int n);
// int main(){
//     int n,r;
//     cout<<"Enter the value of n:-)";
//     cin>>n;
//     cout<<"Enter the value of r:-)";
//     cin>>r;
//     int com_bination =  (factorial(n)/(factorial(r)*factorial(n-r)));
//     cout<<"The value of nCr is:-) "<<  com_bination  <<endl;
//     cout<<factorial(6);



// }
// int factorial(int n){
//     int fac=1;
//     for(int i=n; i>=1; i--){
//         fac*=i;

//     }
//     return fac;
// }









//------------Function of nCr----------------------//

#include<iostream>
using namespace std;
int nCr(int n, int r);
int factorial(int k);
int main(){
    int a,b;
    cout<<"Enter the value of n and r:-)"<<endl;
    cin>>a;
    cin>>b;
    int ans=nCr(a,b);
    cout<<ans;



}
int nCr(int n, int r){                                         //-------------------------Use of IN FUNCtion Calling------------//
    int ans;
    ans=(factorial(n))/(factorial(r)*factorial(n-r));
    return ans;


}
int factorial(int k){
    int ans=1;
    for(int i=k-1; i>=0; i--){
        ans*=i;

    }
    return ans;
}