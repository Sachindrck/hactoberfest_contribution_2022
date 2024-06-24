//Program to find whether a tree is symmetric or not
//Symmetric tree means that when a tree is cast into mirror then the original tree must match with its
//mirror image
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
bool PreorderSymmetry(TreeNode *left, TreeNode *right)
{
    if (left == NULL || right == NULL)
    //If any of the subtree reaches the end of that subtree
    //then we check if in the symmetric version also it must have also reached end
        return left == right;
    if (left->val != right->val)
    //If the tree and symmetric tree value at any point does not match then we return false
        return false;
    return PreorderSymmetry(left->left, right->right) && PreorderSymmetry(left->right, right->left);
    //Checking left most subtree of the tree with right subtree of the symmetric tree
    //and right most subtree of the tree with the leftmost subtree of the symmetric tree
}
bool isSymmetric(TreeNode *root)
{
    return root == NULL || PreorderSymmetry(root->left, root->right);
}