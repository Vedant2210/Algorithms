#include<bits/stdc++.h>
using namespace std;
class A{
    public:
     virtual void display(){
        cout<<"THIS IS A"<<endl;
    }

};

class B :public A{
    public:
    void display(){
        cout<<"THIS IS B"<<endl;
    }
};
int main(){
    A*obj1;
    B obj2;
    obj1=&obj2;
    obj1->display();
}