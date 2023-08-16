

//---------------------Dabangg_Pattern------------------//


// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1



#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter ur limiting row:";
    cin>>n;
    while(i<=n){
        int j=n,k=2,l=2,m=n,value=1,value2=n;
        while(j>=i){
            cout<<value;
            value++;
            j--;
        }
        while(k<=i){
            cout<<"*";
            k++;
        }
        while(l<=i){
            cout<<"*";
            l++;
        }
        while(m>=i){
            cout<<value2;
            value2--;
            m--;

        }
        cout<<endl;
        i++;
    }
}