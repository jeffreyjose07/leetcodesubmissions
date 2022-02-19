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
    vector<int>sol;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL){
            return sol;
        }
        sol.push_back(root->val);
        sol = preorderTraversal(root->left);
        sol = preorderTraversal(root->right);
        return sol;
    }
};