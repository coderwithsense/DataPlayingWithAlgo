class Solution {
public:
    bool solve(TreeNode* root,long int min,long int max){
        if(root==NULL)return true;
        if(root->val >min && root->val<max){
            bool left=solve(root->left,min,root->val);
            bool right=solve(root->right,root->val,max);
            return left && right;
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)return true;
        if((root->left==NULL && root->right==NULL))return true;
        return solve(root,LONG_MIN,LONG_MAX);
    }
};