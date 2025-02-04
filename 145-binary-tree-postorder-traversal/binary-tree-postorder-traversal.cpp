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
    vector<int> postorderTraversal(TreeNode* root) {
      vector<int>ans;
        Traversepostorder(root,ans);
      return ans;
    }
  
  void  Traversepostorder( TreeNode* root, vector<int>& ans){
    if(root ==NULL) return;
   Traversepostorder(root->left,ans);
     Traversepostorder(root->right,ans);
     ans.push_back(root->val);
  }
};