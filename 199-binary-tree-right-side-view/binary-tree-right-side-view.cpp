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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root == NULL) return ans;
        queue<pair<TreeNode*,int>>que;
        map<int,int>mpp;
        que.push({root,0});
        while(!que.empty()){
            auto it = que.front();
            que.pop();
            int level = it.second;
            TreeNode* node = it.first;
            if(mpp.find(level) == mpp.end()) mpp[level] = node -> val;
            if(node -> right != NULL) que.push({node->right,level+1});
           if(node -> left != NULL) que.push({node->left,level+1});
        }
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};