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
//space o(n)
    // void inorder(TreeNode* root, vector<int>& v) {
    //     if (root == nullptr) return;
    //     inorder(root->left, v);
    //     v.push_back(root->val);
    //     inorder(root->right, v);
    // }

    // int kthSmallest(TreeNode* root, int k) {
    //     vector<int> v;
    //     inorder(root, v);
    //     return v[k - 1]; 
    // }

    //const space o(1)
    void solve (TreeNode* root , int& ans ,int &cnt,int k ){
        if(root==NULL)return;
        solve(root->left,ans , cnt,k);
        cnt++;
        if(cnt==k){
            ans = root->val;
            return;
        }
        solve(root->right,ans,cnt,k);
    }
     int kthSmallest(TreeNode* root, int k) {
        int cnt =0;
        int ans;
        solve(root,ans,cnt,k);
        return ans;
     }
};
