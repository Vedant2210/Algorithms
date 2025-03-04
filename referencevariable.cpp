#include<bits/stdc++.h>
using namespace std;


int  main(){
    int a=10;
    int &ref=a;
    int c=a+30;
    int d=ref+30;
    cout<<c<<" "<<d<<endl;//smae edition

    cout<<&a<<endl;//ref and a hVE SAME MEMORY LOCATION
    cout<<&ref<<endl;

    cout<<ref<<endl;//PRINTS 10;
}