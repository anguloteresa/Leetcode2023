// 1026. Maximum Difference Between Node and Ancestor
// anguloteresa
#include <algorithm>
using namespace std;

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
    void dfs(TreeNode* root, int minV, int maxV, int & ans){
        if(root == nullptr) return;
        ans = (max(ans, max(abs(root->val-minV), abs(root->val-maxV))));
        minV = min(minV, root->val);
        maxV = max(maxV, root->val);
        dfs(root->left, minV, maxV, ans);
        dfs(root->right, minV, maxV, ans);
    }
    int maxAncestorDiff(TreeNode* root) {
        int ans = 0;
        dfs(root, root->val, root->val, ans);
        return ans;
    }
};