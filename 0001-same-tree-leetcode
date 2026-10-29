// Problem: 100. Same Tree
// Link: https://leetcode.com/problems/same-tree/
// Time Complexity: O(N) | Space Complexity: O(H)

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q || p->val != q->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
