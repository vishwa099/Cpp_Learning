// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=15;i+=2){
//         cout<<i<<endl;
//         if(i&1){
//             continue;
//         }
//         i++;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    for (int i=0;i<=5;i++){
        for(int j=i;j<=5;j++){
            cout<<i<<" "<<j<<endl;
        }
    }
}