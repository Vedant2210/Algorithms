#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2,4,5,7,8};

    //pointer to pointer
    int*ptr=&arr[0];
    int **ptr2=&ptr;
    cout<<**ptr2<<endl;
    
    //Accesing elements from pointer arithmetic;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<endl;
    }
    // cout<<*arr<<endl;
    // cout<<arr<<endl;
    // cout<<*ptr<<endl;
    //  cout<<ptr<<endl;

}