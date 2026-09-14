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
    vector<int> ele;
    void inorder(TreeNode* root){
        if (root==nullptr){
            return;
        }
        inorder(root->left);
        ele.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* build(int l, int r){
        if(l>r){
            return nullptr;
        }
        int m=l+(r-l)/2;
        TreeNode* ans=new TreeNode(ele[m]);
        ans->left = build(l, m - 1);
        ans->right=build(m+1,r);
        return ans;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return build(0,ele.size()-1);
    }
};