class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v;
        int a=0,b=0;
        for(int i=0;i<nums.size()/2;i++){
            while(nums[a]<0){
                a++;
            }while(nums[b]>0){
                b++;
            }
            v.push_back(nums[a]);
            v.push_back(nums[b]);a++;b++;

        }return v;
        
    }
};