#include <iostream>
#include <vector>
using namespace std;

struct Tree {
    int val;
    Tree *left, *right;
    Tree(int x) {
        val = x;
        left = right = NULL;
    }
};

void preorder(Tree *root, vector<int>& v) {
    if(root) {
        v.push_back(root -> val);
        preorder(root -> left, v);
        preorder(root -> right, v);
    }
}

void print(vector<int>& v) {
    for(auto &el : v) {
        cout << el << " ";
    }
}

int main() {
    Tree *root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> left -> right = new Tree(5);
    root -> right -> left = new Tree(6);
    root -> right -> right = new Tree(7);

    vector<int> v;
    preorder(root, v);
    print(v);
}