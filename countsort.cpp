
#include<bits/stdc++.h>
using namespace std;
void countsort(vector<int>arr){
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
    }
    int count[maxi+1]={0};
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }
    for(int i=1;i<arr.size();i++){
        count[i]+=count[i-1];
    }
    vector<int>output(arr.size());
    for(int j=arr.size()-1;j>=0;j--){
        count[arr[j]]--;
        output[count[arr[j]]]=arr[j];
    }

    for(int i=0;i<arr.size();i++){
        arr[i]=output[i];
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }



}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countsort(arr);


}