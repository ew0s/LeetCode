#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:

    int height(TreeNode* node)
    {
        if (!node)
            return 0;

        return 1 + std::max(height(node->left),
                height(node->right));
    }

    int diameter(TreeNode* node)
    {
        if (!node)
            return 0;

        int lHeight = height(node->left);
        int rHeight = height(node->right);

        int lDiameter = diameter(node->left);
        int rDiameter = diameter(node->right);

        return std::max(lHeight + rHeight,
                std::max(lDiameter, rDiameter));
    }

    int diameterOfBinaryTree(TreeNode* root)
    {
        return diameter(root);
    }
};