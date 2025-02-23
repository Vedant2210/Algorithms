#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,den,result;
   // cout<<den<<endl;
    //cout<<num<<den<<result<<endl;
    cin>>num>>den;
    try{
        if(den==0){
            throw den;
        }
    int result =num/den;
    }
    catch(int ex){
        cout<<"DIVIVIDE by xero not allowed"<<" "<<ex;
    }
    cout<<result<<endl;
}

