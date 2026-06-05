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
    void preorder(TreeNode* root,vector<int>&ans){
        if(root==NULL)return;
        if(root->left)preorder(root->left,ans);
        ans.push_back(root->val);
        if(root->right)preorder(root->right,ans);

    }
    bool isValidBST(TreeNode* root) {

        vector<int> ans;
        preorder(root,ans);

        int n=ans.size();
        for(int i=0;i<n-1;i++){
            if(ans[i]>=ans[i+1]){
                return false;
            }
        }
        return true;

        
    }
};
