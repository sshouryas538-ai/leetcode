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
    TreeNode* first;
    TreeNode* prev;
    TreeNode* middle;
    TreeNode* last;
    void inorder(TreeNode* root){
        if(root == NULL) return;
        inorder(root->left);
        if(prev != NULL && (root->val < prev->val)){
            if(first == NULL){
                first = prev;
                middle = root;
            }else{
                last = root;
            }
        }
        prev = root;
        inorder(root->right);
    }
    // void fix(TreeNode* root, vector<int>&arr, int &i){
    //     if(root == NULL) return;
    //     fix(root->left,arr,i);
    //     root->val = arr[i];
    //     i = i+1;
    //     fix(root->right,arr,i);
    // }
    void recoverTree(TreeNode* root) {
        // vector<TreeNode*>arr;
        // inorder(root,arr);
        // TreeNode* first = NULL;
        // TreeNode* second = NULL;
        // sort(arr.begin(),arr.end());
        // for(int i=1;i<arr.size();i++){
        //     if(arr[i]->val < arr[i-1]->val){
        //         if(first == NULL) first = arr[i-1];
        //         second = arr[i];
        //     }
        // }
        // swap(first->val,second->val);
        // int i=0;
        // fix(root,arr,i);
        // return root;

        first = middle =last = NULL;
        prev = new TreeNode(INT_MIN);
        inorder(root);
        if(first && last) swap(first->val,last->val);
        else if(first && middle) swap(first->val,middle->val);
    }
};