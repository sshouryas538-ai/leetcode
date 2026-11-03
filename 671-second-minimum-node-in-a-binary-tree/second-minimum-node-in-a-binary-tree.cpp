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
    void inorder(TreeNode* root, set<int>&arr){
        if(root == NULL) return;
        inorder(root->left,arr);
        arr.insert(root->val);
        inorder(root->right,arr);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>arr;
        inorder(root,arr);
        int firstmin = INT_MAX, secondmin = INT_MAX;
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]<firstmin){
        //         firstmin = arr[i];
        //         secondmin = firstmin;
        //     }else if(arr[i]<secondmin && arr[i] != firstmin){
        //         secondmin = arr[i];
        //     }
        // }
        // if(secondmin == INT_MAX) return -1;
        // return secondmin;

        if (arr.size() >= 2) {
            return *next(arr.begin(), 1);
        }
        return -1;
    }
};