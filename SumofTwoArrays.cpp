#include<iostream>
#include<vector>
using namespace std; 
void reverse(vector <int> v){
    int s=0;
    int e=v.size()-1;
    while(s<e){
        swap(v[s++],v[e--]);
    }
    for(int i:v){
        cout<<i<<" ";
    }
}

vector<int> sumofArray(vector <int> &nums1,int n,vector <int> &nums2, int m){
    int i=n-1, j=m-1;
    vector <int> ans;
    int carry=0;
    while(i>=0 && j>0){
        int val1=nums1[i--];
        int val2=nums2[j--];
        int sum=val1+val2+carry;
        carry=sum/10;
        int val=sum%10;
        ans.push_back(val);


    }
    while(i>=0){
        int sum=nums1[i]+carry;
        carry=sum/10;
        int val=sum%10;
        ans.push_back(val);
        i--;
    }
    while(j>=0){
        int sum=nums2[i]+carry;
        carry=sum/10;
        int val=sum%10;
        ans.push_back(val);
        j--;
    }
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        int val=sum%10;
        ans.push_back(sum);
    }
    reverse(ans);




}
int main(){
    vector <int> v1, v2;
    v1[0]=1;
    v1[1]=2;
    v1[2]=3;
    v1[3]=9;
    v2[0]=8;
    v2[1]=5;
    v2[2]=7;
    sumofArray(v1,4,v2,3);
}