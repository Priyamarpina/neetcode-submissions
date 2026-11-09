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
    vector<int> getLonelyNodes(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;
        while(q.size()){
            int size=q.size();

            for(int i=0;i<size;i++){
                TreeNode* head=q.front();
                q.pop();
                int count=0;
                int value=0;
                if(head->left){
                    count++;
                    value=head->left->val;
                    q.push(head->left);
                }

                if(head->right){
                    count++;
                    value=head->right->val;
                    q.push(head->right);
                }

                if(count==1){
                    ans.push_back(value);
                }
            }
        }

        return ans;
    }
};
