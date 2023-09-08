#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

    cout<<"Finding 8 in the vector v-->"<<binary_search(v.begin(), v.end(),8)<<endl;           //------Returns boolean value o and 1--------//

    // int a=5, b=4;
    // swap(a,b);
    // cout<<a<<" "<<b<<endl;      //-----Swapped the value of a and b;

    for(int i:v){
        cout<<i<<" ";
    }
    rotate(v.begin(),v.begin()+2,v.end());          //----------Rotated by two elements-------------//

    cout<<"After rotating the vector--->"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

}