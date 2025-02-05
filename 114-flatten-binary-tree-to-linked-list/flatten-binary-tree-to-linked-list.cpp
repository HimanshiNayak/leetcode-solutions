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
    void flatten(TreeNode* root) {
        if(root==NULL)return;
        TreeNode* curr= root;
        while(curr){
        if(curr->left){
        TreeNode* pre = curr->left;
        while(pre->right){
            pre = pre->right;
        }
        pre->right = curr->right;
        curr->right= curr->left;
        curr->left = NULL;
        }
        curr = curr->right;
     }
    }
};

// class Solution {
// public:
//     void flatten(TreeNode* root) {
//         if (!root) return;

//         TreeNode* curr = root;
//         while (curr) {
//             if (curr->left) {
//                 TreeNode* pre = curr->left;
//                 // Find the rightmost node in the left subtree
//                 while (pre->right) {
//                     pre = pre->right;
//                 }
//                 // Connect the right subtree to the rightmost node
//                 pre->right = curr->right;
//                 // Move left subtree to right
//                 curr->right = curr->left;
//                 curr->left = NULL;
//             }
//             // Move to the next node
//             curr = curr->right;
//         }
//     }
// };
