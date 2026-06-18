class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=0;
        for(int i=0;i<nums.size();i++){
            n^=nums[i];
        }
        int count=0;
        
        while(k!=0||n!=0){
            int a=k%2;
            int b=n%2;
            if(a!=b){
                count++;
            }
            k=k/2;
            n=n/2;

        }
        return count;
    }
};