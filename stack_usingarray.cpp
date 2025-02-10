#include<bits/stdc++.h>
using namespace std;


class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Underfloe"<<endl;
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<" stack is empty"<<endl;
            return -1;
        }
    }

    bool empty(){
        if(top==-1){
           return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack st(5);
    st.push(1);
    st.push(8);
    //st.push(2);
    cout<<st.peek()<<endl;//8
    st.pop();
    cout<<st.peek()<<endl;//1

}