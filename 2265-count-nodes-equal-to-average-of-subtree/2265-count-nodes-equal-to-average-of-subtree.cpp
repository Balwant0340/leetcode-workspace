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
    struct SubtreeData {
        int sum;
        int count;
    };
    
    int matchCount = 0;

    SubtreeData postOrder(TreeNode* root) {
        if (root == nullptr) {
            return {0, 0}; 
        }

        SubtreeData left = postOrder(root->left);
        SubtreeData right = postOrder(root->right);

        int currentSum = left.sum + right.sum + root->val;
        int currentCount = left.count + right.count + 1;

        if (root->val == currentSum / currentCount) {
            matchCount++;
        }

        return {currentSum, currentCount};
    }
    int averageOfSubtree(TreeNode* root) {
        postOrder(root);
        return matchCount;
    }
};