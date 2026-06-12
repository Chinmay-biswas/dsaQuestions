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

        int findm(vector<int>& nums,int r,int l){
            int maxi=nums[r],count=r;
            for(int i=r;i<=l;i++){
                if(nums[i]>maxi){
                    maxi=nums[i];
                    count=i;
                }
                
                
            }
            return count;
        }
        TreeNode* dac(vector<int>& nums,int r,int l){
            if(r>l)return NULL;
            int m=findm(nums,r,l);
            TreeNode* root = new TreeNode(nums[m]);
            
            root->left=dac(nums,r,m-1);
            root->right=dac(nums,m+1,l);
            return root;
            
            

        }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       return dac(nums,0,nums.size()-1);
        
    }
};