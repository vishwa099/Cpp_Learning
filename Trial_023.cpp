
//-------String compression--------------//
/*  
    Example:--- Input--- [a,a,b,b,b,c,c,d,e,e,f,,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g]
       expected output-- [a,2,b,3,c,2,d,e,2,f,g,10]        --(all cases covered);     
*/

#include<iostream>
#include<string>
using namespace std;


int compreString(string str){
    int i=0;
    int ansIndex=0;
    int n=str.length();
    while (i<n){
        int j=j+1;
        while(j<n && str[i]==str[j]){
            j++;

        }
        str[ansIndex++]=str[i];

        int count=j-1;
        if(count>1){
            string cnt=to_string(count);
            for(char ch:cnt){
                str[ansIndex++]=ch;
            }
        }
        i=j;
    }
    return ansIndex;

}
int main(){

    string name;
    cout<<"enter ur string:---->"<<endl;
    cin>>name;
    cout<<compreString(name);

    return 0;
}