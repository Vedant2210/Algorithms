#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"A"<<endl;
    }
    ~A(){
        cout<<"BY A"<<endl;
    }
    void show(){
        cout<<"HI"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"B"<<endl;
    }
    ~B(){
        cout<<"BY B"<<endl;
    }
    void show(){
        cout<<"HELLO"<<endl;
    }
};
class C:public B,public A{
    public:
    C(){
        cout<<"C"<<endl;
    }
    ~C(){
        cout<<"BY C"<<endl;
    }
};
int main(){
    C obj1;
   // obj1.show();
  // obj1.B::show();
}