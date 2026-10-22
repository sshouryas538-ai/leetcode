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
void inorder(TreeNode* root, vector<int>&ans){
    if(!root) return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
    int getMinimumDifference(TreeNode* root) {
        if(root == NULL) return -1;
        vector<int>ans;
        inorder(root,ans);
        int uttar = INT_MAX;
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++){
            int check = abs(ans[i]-ans[i+1]);
            uttar = min(uttar,check);
        }
        return uttar;
    }
};