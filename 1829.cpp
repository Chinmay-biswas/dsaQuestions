class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>v;
        int x=0;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
        }
        int a=(1 << maximumBit)-1;

        for(int i=nums.size()-1;i>=0;i--){
            
        v.push_back(x ^ a);

            x ^= nums[i];
        }
        return v;
    }
};