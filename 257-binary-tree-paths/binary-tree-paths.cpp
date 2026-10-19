class Solution {
public:
    bool isLeaf(TreeNode* root) {
        return root->left == NULL && root->right == NULL;
    }

    void check(TreeNode* root, vector<string>& ans, string& temp) {
        if (root == NULL) return;

        int oldSize = temp.size();

        if (!temp.empty()) {
            temp += "->";
        }

        temp += to_string(root->val);

        if (isLeaf(root)) {
            ans.push_back(temp);
            temp.resize(oldSize);
            return;
        }

        check(root->left, ans, temp);
        check(root->right, ans, temp);

        temp.resize(oldSize);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string temp;

        check(root, ans, temp);

        return ans;
    }
};
