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
unordered_map<int,int> mp;
int preIndex = 0;
TreeNode* build(vector<int>& preorder,int left , int right){
if(left>right){
    return NULL;
}
TreeNode* root = new TreeNode(preorder[preIndex]);
preIndex++;
int mid = mp[root->val];
root->left = build(preorder ,left , mid-1);
root->right = build(preorder , mid+1 , right);
return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      int n = preorder.size();
      for(int i = 0; i< n; i++){
        mp[inorder[i]] = i;
      }
      TreeNode* root = build(preorder ,0 , n-1);
      return root;
    }
};