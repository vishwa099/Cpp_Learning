#include<iostream>
using namespace std;

void update(int *ptr){
    *ptr+=1;                                                                //--wild pointers  dangling pointers
}
int main(){
    int num=23;
    int *ptr1=&num;
    cout<<"before calling funciton---> "<<num<<endl;
    update(ptr1);
    cout<<"after calling fucntion--->"<<num<<endl;
    
    
    return 0;
}