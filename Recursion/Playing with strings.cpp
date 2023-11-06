//----------Recursion Day 4------------//
//------Reversing a string using recursion-------------//

#include<iostream>
using namespace std;
void reverse(string &arr, int i, int j){
    if(i>j){
        return;

    }
    swap(arr[i],arr[j]);
    i++;
    j--;

    //--again calling the function
    reverse(arr,i,j);

}
int main(){
    string str="Vishwambhar";
    reverse(str,0,str.length()-1);
    cout<<endl;

    cout<<"String after calling the recursive function is:- "<<str<<endl;


}