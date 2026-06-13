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
        void r(TreeNode* root,vector<int>&v){
            if(root==NULL)return;
            r(root->left,v);
            v.push_back(root->val);
            r(root->right,v);
            
        }
        TreeNode* dc(vector<int>&v,int l,int r){
            if(l>r)return NULL;
            int m = (l + r) / 2;
            TreeNode* root2= new TreeNode(v[m]);
           root2->left= dc(v,l,m-1);
            root2->right=dc(v,m+1,r);
            return root2;
            


        }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        r(root,v);
       
        
        
        return dc(v,0,v.size()-1);


        
    }
};