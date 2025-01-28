#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&arr,int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>=pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(vector<int>&arr,int n,int low,int high){
    if(low<high){
        int partitionI=func(arr,low,high);
        quicksort(arr,n,low,partitionI-1);
        quicksort(arr,n,partitionI+1,high);

    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    quicksort(arr,n,low,high);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}