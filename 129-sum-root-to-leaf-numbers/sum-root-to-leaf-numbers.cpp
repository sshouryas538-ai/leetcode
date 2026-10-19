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

    bool isLeaf(TreeNode* root){
        if(root->left == NULL && root->right == NULL) return true;
        return false;
    }
    void addition(TreeNode* root, int &ans,int &temp){
        if(root == NULL) return;
        temp = temp*10 + root->val;
        if(isLeaf(root)){
            ans += temp;
            temp /= 10;
            return;
        }
        addition(root->left,ans,temp);
        addition(root->right,ans,temp);
        temp /= 10;
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        int temp = 0;
        addition(root,ans,temp);
        return ans;
    }
};