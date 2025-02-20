#include<bits/stdc++.h>
using namespace std;

class Circle{
    private:
    int radius;
    public:
    Circle(int rad){
        this->radius=rad;
    }
    double area(){
        return M_PI*radius*radius;
    }
    double getvalue(){
        return radius;
    }
    void setvalue(int val){
        this->radius=val;
        cout<<getvalue()<<endl;
    }
    double circum(){
        return 2*M_PI*radius;
    }
};
int main(){
    Circle c(5);
    cout<<c.area()<<endl;
    cout<<c.circum()<<endl;
    cout<<c.getvalue()<<endl;
    c.setvalue(6);
 //   cout<<c.getvalue()<<endl;
    // cout<<c.area()<<endl;
    // cout<<c.circum()<<endl;
}





//private members can be accesed by the other mebers of the class line member function as shown above.
//private values can be chaged by the getter and setter function as shown above;
//member function can call other member function of same class.