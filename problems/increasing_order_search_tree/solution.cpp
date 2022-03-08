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
    TreeNode* curr;
    void inorder(TreeNode* node){
        if(node==NULL){
            return;
        }
        inorder(node->left);
        node->left=NULL;
        curr->right = node;
        curr = node;
        inorder(node->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* res = new TreeNode(0);
        curr = res;
        inorder(root);
        return res->right;
    }
    
};