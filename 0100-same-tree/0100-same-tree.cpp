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
 void precheck(TreeNode* root,vector<string>&ans){
    if(!root){
        ans.push_back("N");
        return;
    }

    ans.push_back(to_string(root->val));
    precheck(root->left,ans);
    precheck(root->right,ans);
 }
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<string> ans1,ans2;
        precheck(p,ans1);
        precheck(q,ans2);
        return ans1==ans2;
    }
};