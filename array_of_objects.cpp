#include<bits/stdc++.h>
using namespace std;

class Shop{
    public:
    string a;
    int price;
    void setdata(string str,int b){
        a=str;
        price=b;
    }
    void getdata(){
        cout<<"item name"<<a<<" "<<"price is "<<price<<endl;
    }

};

int main(){
    Shop* ptr1=new Shop[3];
    Shop *ptr2=ptr1;
    for(int i=0;i<3;i++){
        cout<<"Enter item name"<<endl;
        string p;
        cin>>p;
        cout<<"Enter  price "<<endl;
        int price;
        cin>>price;
        ptr1->setdata(p,price);
        ptr1++;
    }
    for(int i=0;i<3;i++){
        ptr2->getdata();
        ptr2++;
    }
}