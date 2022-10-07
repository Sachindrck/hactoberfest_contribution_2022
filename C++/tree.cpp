//Binary Search Tree Implementation
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int val){
        data=val; 
left=NULL;
right=NULL;
}};
Node* insert(Node*root,int val){
    
    Node*temp=new Node(val);
    if(root==NULL){
        return temp ;
    }
    if(val>root->data){
        root->right=insert(root->right,val);
    }
    else if(root->data>val){
        root->left=insert(root->left,val);
    }
    return root;
    }
    void inorder(Node*root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
int main(){
Node*root=NULL;
root=insert(root,2);
insert(root,67);
insert(root,12);
insert(root,6);
insert(root,4);
insert(root,5);
insert(root,8);
insert(root,9);
insert(root,1);
inorder(root);
    return 0;
}