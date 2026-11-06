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
    void inorder(TreeNode* root, vector<int> &arr){
        if(root == NULL) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>arr;
        inorder(root,arr);
        for(int i=0;i<arr.size();i++){
            int low = 0, high = arr.size()-1;
                int search = k - arr[i];
            while(low <= high){
                int mid = low + (high - low)/2;
                if(mid != i && arr[mid] == search) return true;
                else if(arr[mid] <search ) low = mid +1;
                else high = mid - 1;
            }
        }
        return false;
    }
};