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
    void inorder(TreeNode* root, vector<TreeNode*> &arr){
        if(root == NULL) return;
        inorder(root->left, arr);
        arr.push_back(root);
        inorder(root->right,arr);
    }
    // void fix(TreeNode* root, vector<int>&arr, int &i){
    //     if(root == NULL) return;
    //     fix(root->left,arr,i);
    //     root->val = arr[i];
    //     i = i+1;
    //     fix(root->right,arr,i);
    // }
    void recoverTree(TreeNode* root) {
        vector<TreeNode*>arr;
        inorder(root,arr);
        TreeNode* first = NULL;
        TreeNode* second = NULL;
        // sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if(arr[i]->val < arr[i-1]->val){
                if(first == NULL) first = arr[i-1];
                second = arr[i];
            }
        }
        swap(first->val,second->val);
        // int i=0;
        // fix(root,arr,i);
        // return root;
    }
};