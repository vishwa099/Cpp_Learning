#include<iostream>
using namespace std;
long long int sqrt_integer(int n){
    int s=0;
    int e=n;
    long long int mid=(s+e)/2;
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square ==n)
           return mid;
        if(square <n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
    

}//------------------expanding for more precision------------//
double morePrecision(int n, int precision, int tempsol){
    double factor=1;
    double ans=tempsol;
    for(int i=0; i<precision; i++){
        factor/=10;
        for(double j=tempsol; j*j<n; j+=factor){
            ans=j;
        }

    }
    return ans;

}

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int tempsol=sqrt_integer(n);
    cout<<"Ans is "<<morePrecision(n,3, tempsol);


}