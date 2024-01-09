// 938. Range sum of BST
// anguloteresa

// Definition for a binary tree node. (provided by leetcode)
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void inorder(TreeNode* root, int low, int high, int &ans){
        if (root == nullptr) return;
        if(root->val >= low && root->val <= high){
            ans += root->val;
        }
        inorder(root->left, low, high, ans);
        inorder(root->right, low, high, ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        if(root == nullptr) return 0;
        inorder(root, low, high, ans);
        return ans;
    }
};