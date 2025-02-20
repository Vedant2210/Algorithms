#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>arr={{5,3,3},{4,3,3},{4,3,2}};
    sort(arr.begin(),arr.end());
    for(auto it:arr){
        for(auto itt:it){
            cout<<itt<<" ";
        }
        cout<<endl;
    }
}

//OUTPUT
// 4 3 2 
// 4 3 3 
// 5 3 3 