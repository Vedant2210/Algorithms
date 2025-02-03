#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,4};
    int sum=accumulate(arr.begin(),arr.begin()+5,0);
    cout<<sum;

}