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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q1;
        q1.push(root);
        while(!q1.empty()){
            int n=q1.size();
            vector<int>anss;
            while(n>0){
                n--;
                TreeNode* x=q1.front();
                q1.pop();
                anss.push_back(x->val);
                if(x->left)q1.push(x->left);
                if(x->right)q1.push(x->right);
            }
            ans.push_back(anss);
        }
        return ans;
    }
};
