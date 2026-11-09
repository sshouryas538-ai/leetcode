class NodeValue {
public:
    int maxNode, minNode, maxSum;

    NodeValue(int minNode, int maxNode, int maxSum) {
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSum = maxSum;
    }
};

class Solution {
private:
    NodeValue largestBSTSubtreeHelper(TreeNode* root, int &ans) {

        if (!root)
            return NodeValue(INT_MAX, INT_MIN, 0);

        auto left = largestBSTSubtreeHelper(root->left, ans);
        auto right = largestBSTSubtreeHelper(root->right, ans);

        if (left.maxNode < root->val && root->val < right.minNode) {

            int sum = left.maxSum + right.maxSum + root->val;

            ans = max(ans, sum);

            return NodeValue(
                min(root->val, left.minNode),
                max(root->val, right.maxNode),
                sum
            );
        }

        return NodeValue(INT_MIN, INT_MAX, 0);
    }

public:
    int maxSumBST(TreeNode* root) {
        int ans = 0;
        largestBSTSubtreeHelper(root, ans);
        return ans;
    }
};