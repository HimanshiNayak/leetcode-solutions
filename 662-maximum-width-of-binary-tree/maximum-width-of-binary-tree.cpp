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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        long long maxwidth =0;
        while(!q.empty()){
            long long l = q.front().second;
            long long r = q.back().second;
            maxwidth = max(maxwidth,r-l+1); //max nodes on one lvel 
        
          int n = q.size();
          for(int i=0;i<n;i++){
            auto[curr,idx]=q.front();
            q.pop();
            if(curr->left){
                q.push({curr->left , 2*(idx-l)}); //prevent overflow 
            }        
            if(curr->right){
                q.push({curr->right,2*(idx-l)+1});
            }
          } 
         }
         return maxwidth;
    }
};