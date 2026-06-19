class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int ans=0,idx=piles.size()-2;
        for(int i=0;i<piles.size()/3;i++){
            ans+=piles[idx];
            idx=idx-2;
        }
        return ans;
        
    }
};