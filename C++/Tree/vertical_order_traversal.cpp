// Program to print the vertical order traversal of binary tree

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void verticalorder(node *root, int hd, map<long long int, vector<int>> &m)
{
    if (root == NULL)
    {
        return;
    }
    m[hd].push_back(root->data);
    verticalorder(root->left, hd - 1, m);
    verticalorder(root->right, hd + 1, m);
}
vector<int> verticalOrder(node *root)
{
    vector<int> v;
    map<long long int, vector<int>> m;
    int hd = 0;
    verticalorder(root, hd, m);

    for (auto i = m.begin(); i != m.end(); i++)
    {
        for (int j = 0; j < (i->second).size(); j++)
        {
            v.push_back(i->second[j]);
        }
    }
    return v;
}
int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right = new node(3);
    root->right->right = new node(7);
    root->right->left = new node(6);

                //        1
                //       / \
                //     2     3
                //    / \   / \
                //   4   5 6   7
    cout << "The Verticalorder traversal of tree is : ";
    vector<int> v = verticalOrder(root);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}