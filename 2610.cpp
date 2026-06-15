class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int>v(nums.size() + 1,0);
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        
        vector<vector<int>>ans;
        vector<int>g;
        bool a=false;
        while(a==false){
            
            a=true;
            for(int i=1;i<=nums.size();i++){
            if(v[i]!=0){
            g.push_back(i);
            v[i]--;
            a=false;
           }
        }
        if(!g.empty()){ans.push_back(g);}
    
        g.clear();
        }
        return ans;
        
    }
};