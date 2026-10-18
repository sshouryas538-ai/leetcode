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
    int findBottomLeftValue(TreeNode* root) {
        pair<TreeNode*,int>ans{root,0};
        if(root == NULL) return -1;
        queue<pair<TreeNode*,int>>que;
        map<int,int>mpp;
        que.push({root,0});
        while(!que.empty()){
            auto it = que.front();
            que.pop();
            int level = it.second;
            if(level > ans.second) ans = it;
            TreeNode* node = it.first;
            if(node->left != NULL) que.push({node->left,level+1});
            if(node->right != NULL) que.push({node->right,level+1});
        }
        return ans.first->val;
    }
};