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
private:
    int solve(TreeNode* root, int &ans) {
        if(root == NULL){
            return 0;
        }
        int r = solve(root->left, ans);
        int l = solve(root->right, ans);
        ans = max(ans, r+l);
        return max(r, l)+1;
    };
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        solve(root, ans);
        return ans;
    }
};