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
    void getLeftBoundary(TreeNode* root,vector<int> &ans){
        if(!root){
            return;
        }
        if(!root->right && !root->left){
            return;
        }
        ans.push_back(root->val);
        if(root->left){
            getLeftBoundary(root->left,ans);
        }else if(!root->left && root->right){
            getLeftBoundary(root->right,ans);
        }
    }

     void getRightBoundary(TreeNode* root,vector<int> &ans){
        if(!root){
            return;
        }
        if(!root->right && !root->left){
            return;
        }
       
        if(root->right){
            getRightBoundary(root->right,ans);
        }else if(!root->right && root->left){
            getRightBoundary(root->left,ans);
        }
        ans.push_back(root->val);
    }
    void getLeaves(TreeNode* root,vector<int> &ans){
        if(!root){
            return;
        }
        if(!root->right && !root->left){
            ans.push_back(root->val);
            return;
        }
        getLeaves(root->left,ans);
        getLeaves(root->right,ans);
    }
    vector<int> boundaryOfBinaryTree(TreeNode* root) {
        if(!root){
            return {};
        }
       
        vector<int> ans;
        ans.push_back(root->val);
        if(root && root->left){
            getLeftBoundary(root->left,ans);
        }
        if(root && (root->left || root->right)){
            getLeaves(root,ans);
        }
        if(root && root->right){
            getRightBoundary(root->right,ans);
        }
        return ans;
    }
};
