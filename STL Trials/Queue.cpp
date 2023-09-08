#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue <string> q;
    q.push("vishwa");                      //--------Queue works on the FIFO Principle ----First in first out-----------//
    q.push("ambhar");
    q.push("Prajapati");
    cout<<"The size of the queue before the popping out the element is:-> "<<q.size()<<endl;
    q.pop();
    cout<<"The poped element is "<<endl;
    cout<<"Now the front element is  "<<q.front()<<endl;
}