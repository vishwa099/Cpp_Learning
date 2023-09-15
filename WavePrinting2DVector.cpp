
///////////---------------------------HERE WE ARE USING CONCEPT OF 2D VECTOR--------------------------///////////////////////

//-------------Print the Two Dimensional array in wave form-------------//

//----Observation==>> while the column is even we go to top to bottom
//---------and in case of odd column we go bottom to top


#include<iostream>
#include<vector>
using namespace std;
vector <int> wavePrint(vector <vector<int>> arr, int nRows , int mCols){
    vector <int> ans;

    for(int Col=0; Col<mCols; Col++){
        if(Col&1){
            //----odd Index-------->> BottomToTop

            for(int Row=nRows-1; Row>=0; Row--){
                cout<<arr[Row][Col]<<" ";
                ans.push_back(arr[Row][Col]);

            }
        }
        else{
            //----0 or Even index -->> top to bottom
            for (int row=0; row<nRows; row++){
                cout<<arr[row][Col]<<" ";
                ans.push_back(arr[row][Col]);
            }
        }

    }
    return ans;

}
int main(){           //------------Learning to create and work with 2d vector----------------//

    vector<vector<int>> vec(3, vector<int> (3, 0));

    //cout<<vec.capacity();


    for(int i=0;i<3; i++){
         for(int j=0; j<3; j++){
            cin>>vec[i][j];
            
         }
     }

     cout<<"Printing out ur 2D array:---->>>"<<endl<<endl;

     for(int i=0; i<3; i++){
        for(int j=0;j<3; j++){
            cout<<vec[i][j]<<" ";

        }

        cout<<endl;
     }

     cout<<"Printing the elements in Wave Form:--->"<<endl;
     
     wavePrint(vec,3,3);


    

}