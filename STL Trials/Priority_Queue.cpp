#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi;
    priority_queue<int, vector <int>, greater <int>> mini; 

    maxi.push(2);
    maxi.push(23);
    maxi.push(12);
    maxi.push(18);
    maxi.push(16);
    maxi.push(11);
    maxi.push(148);

    int n=maxi.size();
    cout<<"the size of the queue before popping out operation is-->"<<n<<endl;
    for (int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    mini.push(2);
    mini.push(23);
    mini.push(12);
    mini.push(18);
    mini.push(16);
    mini.push(11);
    mini.push(148);

    int k=mini.size();
    cout<<"the size of the queue before popping out operation is-->"<<k<<endl;
    for (int i=0; i<k; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }


}