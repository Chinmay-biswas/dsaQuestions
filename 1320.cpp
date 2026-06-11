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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int count=0;
        while(!q.empty()){
            count=0;
            int x=q.size();
            for(int i=0;i<x;i++){
                TreeNode* a=q.front();
                q.pop();
                
                if(a->left!=NULL){q.push(a->left);}
                if(a->right!=NULL){q.push(a->right);}
                count+=a->val;
            }
        }
        return count;
        
    }
};