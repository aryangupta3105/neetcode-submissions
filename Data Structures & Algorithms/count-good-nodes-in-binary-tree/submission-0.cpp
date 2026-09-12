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
    int cnt=0;
    void solve(TreeNode* root,int maxi){
        if(maxi<=root->val){
            cnt++;
            maxi=root->val;
        }
        if(root->left)solve(root->left,maxi);
        if(root->right)solve(root->right,maxi);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)return 0;
        int maxi=root->val;
         if(root->left)solve(root->left,maxi);
        if(root->right)solve(root->right,maxi);
        return cnt+1;
    }
};