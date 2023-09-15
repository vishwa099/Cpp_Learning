

//-------Playing with 2D-Arrays--------------//

#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr[3][4];//={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


    //---Entering the values in created two dimensional array---//

    //----This is rowise input--------//
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin>>arr[j][i];
        }
    }

    cout<<endl;
    cout<<endl;
    

    //---outputting the elements rowise--//
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[j][i]<<" ";

        }
        cout<<endl;
    }
    return 0;
}


