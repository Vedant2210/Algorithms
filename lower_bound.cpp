#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={2,3,5,7,10};
    cout<<*lower_bound(arr.begin(),arr.end(),7);//output 7
    cout<<*upper_bound(arr.begin(),arr.end(),7);//output//10
}