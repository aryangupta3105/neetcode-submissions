class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        return max(lh, rh) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);

        int currentDiameter = height(root->left) + height(root->right);

        return max(currentDiameter, max(leftDiameter, rightDiameter));
    }
};