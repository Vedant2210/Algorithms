#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int maths;
    
    void set_marks(int n){
        maths=n;
    }
    void fdisplay(){
        cout<<"maths marks"<<maths<<endl;
    }
};

class Test: virtual public Student{
    public:
    int physics;
    void set_test_marks(int m){
        physics=m;
    }
    void sdisplay(){
        cout<<"physics marks"<<physics<<endl;
    }
};

class Sports:virtual public Student{
    public:
    int ped;
    void setmarks(int k){
        ped=k;
    }
    void display(){
        cout<<"ped marks"<<ped<<endl;
    }

};
class Result: public Test,public Sports{
    public:
    int total;
    void set_display(){
        total=ped+physics+maths;
        cout<<"total marks "<<total<<endl;
        display();
        fdisplay();
        sdisplay();
        
    }
};
int main(){
    Result vedant;
    vedant.set_marks(70);
    vedant.set_test_marks(10);
    vedant.setmarks(20);
    vedant.set_display();

}