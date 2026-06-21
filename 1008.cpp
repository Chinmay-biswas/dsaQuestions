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

    int fr(int a,int b,int r,vector<int>&v){
        int i;
        for( i=b;i<=r;i++){
            if(v[i]>a){
               return i;
            }

        }
        return r+1;
    }


   TreeNode* rec(vector<int>&v,int l,int r){
    if(l > r){
            return NULL;}
        TreeNode* root = new TreeNode(v[l]);
        if(l==r)return root;
        
        int r1=fr(v[l],l+1,r,v);
        root->left=rec(v,l+1,r1-1);
        root->right=rec(v,r1,r);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return rec(preorder,0,preorder.size()-1);
        
    }
};