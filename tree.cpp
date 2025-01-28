#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* generateTree(){
    int data;
    cin>>data;
    if(data==-1)return NULL;
    Node*rootnode=new Node(data);
    rootnode->left=generateTree();
    rootnode->right=generateTree();
    return rootnode;
}
void Preorder(Node*root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<endl;
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(Node*root){
    if(root==nullptr){
        return;
    }

    Inorder(root->left);
    cout<<root->data<<endl;
    Inorder(root->right);
}
void postorder(Node*root){
    if(root==nullptr){
        return;
    }

    postorder(root->left);
   
    postorder(root->right);
     cout<<root->data<<endl;
}
int main(){
    Node*temp=generateTree();
    //Preorder(temp);
    Inorder(temp);
    //postorder(temp);

}