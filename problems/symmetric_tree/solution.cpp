/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool areEqual(TreeNode* leftT, TreeNode* rightT){
        if(leftT==NULL && rightT == NULL)
            return true;
        if(leftT==NULL || rightT == NULL)
            return false;
        if(leftT->val != rightT->val)
            return false;
        return areEqual(leftT->left,rightT->right) && areEqual(leftT->right,rightT->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return areEqual(root->left,root->right);
    }
};