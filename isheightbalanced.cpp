/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
#include <math.h>
using namespace std;

class TreeNode {
  public:
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution {
  public:
    int height(TreeNode *root) {
        /* if (root == nullptr) */
        /*     return 0; */
        /* if (root->left == nullptr && root->right != nullptr) */
        /*     return -1; */
        /* if (root->left != nullptr && root->right == nullptr) */
        /*     return 1; */
        /* if (root->left == nullptr && root->right == nullptr) */
        /*     return 0; */
        /* return bf(root->left) - bf(root->right); */
        if (root == nullptr) return 0;
        int leftheight = height(root->left);
        if (leftheight == -1) return -1;

        int rightheight = height(root->right);
        if (rightheight == -1) return -1;

        if (abs(leftheight - rightheight) > 1) return -1;

        return max(leftheight, rightheight) + 1;
    }

    bool isBalanced(TreeNode *root) {
        if (height(root) == -1) 
            return 0;
        return 1;
    }
};
