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
 void traverse(TreeNode* root, vector<int>&ans){
    if(!root) return;
    ans.push_back(root->val);
    traverse(root->left,ans);
    traverse(root->right,ans);
 }
class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        if(!root) return -1;
        vector<int> ans;
        int mini=root->val;
        long long mini2=LLONG_MAX;
        traverse(root,ans);
        for(int i=0;i<ans.size();i++){
            if(ans[i]<mini){
                mini2=mini;
                mini=ans[i];
            }
            else if(ans[i]>mini &&ans[i]<mini2){
                mini2=ans[i];
            }
        }
        if(mini2==LLONG_MAX) return -1;
        return (int) mini2;
    }
};