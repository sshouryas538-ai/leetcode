/**

* Definition for a binary tree node.
* struct TreeNode {
* ```
  int val;
  ```
* ```
  TreeNode *left;
  ```
* ```
  TreeNode *right;
  ```
* ```
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  ```
* };
  */

class Codec {
public:


// Encodes a tree to a single string.
string serialize(TreeNode* root) {
    if(root == nullptr) return "#,";

    string ans = "";
    queue<TreeNode*> temp;
    temp.push(root);

    while(!temp.empty()) {
        TreeNode* check = temp.front();
        temp.pop();

        if(check == nullptr) {
            ans += "#,";
        }
        else {
            ans += to_string(check->val) + ",";
            temp.push(check->left);
            temp.push(check->right);
        }
    }

    return ans;
}

// Decodes your encoded data to tree.
TreeNode* deserialize(string data) {
    if(data.empty() || data[0] == '#')
        return nullptr;

    stringstream ss(data);
    string value;

    getline(ss, value, ',');
    TreeNode* root = new TreeNode(stoi(value));

    queue<TreeNode*> temp;
    temp.push(root);

    while(!temp.empty()) {
        TreeNode* check = temp.front();
        temp.pop();

        // Construct left child
        if(!getline(ss, value, ','))
            break;

        if(value != "#") {
            check->left = new TreeNode(stoi(value));
            temp.push(check->left);
        }

        // Construct right child
        if(!getline(ss, value, ','))
            break;

        if(value != "#") {
            check->right = new TreeNode(stoi(value));
            temp.push(check->right);
        }
    }

    return root;
}
};
