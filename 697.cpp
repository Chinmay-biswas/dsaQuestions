class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

                unordered_map<int,int> f;
        unordered_map<int,int> one;

        unordered_map<int,int> l;

        for(int i = 0; i < nums.size(); i++) {

            if(one.find(nums[i]) == one.end())
                  one[nums[i]] = i;



             l[nums[i]] = i;
             f[nums[i]]++;
        }

        int degree = 0;

    for(auto x : f) {
            degree = max(degree, x.second);

        }

        int ans = nums.size();

         for(auto x : f) {



    if(x.second == degree) {

                ans = min(ans, l[x.first] - one[x.first] + 1);
            }
        }

        return ans;

    }
};