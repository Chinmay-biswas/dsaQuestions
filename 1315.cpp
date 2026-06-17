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

    int rec(TreeNode* &r){
        if(r==NULL)return 0;
        int sum=0;
        if(r->val%2==0){
            if(r->left){
                if(r->left->left){
                    sum+=r->left->left->val;
                }
                if(r->left->right){
                    sum+=r->left->right->val;
                }
            }
            if(r->right){
                if(r->right->left){
                    sum+=r->right->left->val;
                }
                if(r->right->right){
                    sum+=r->right->right->val;
                }
            }
        }
        sum+=rec(r->left);
        sum+=rec(r->right);
        return sum;
     

    }

    int sumEvenGrandparent(TreeNode* root) {
        
        int ans=rec(root);
        return ans;
    }
};