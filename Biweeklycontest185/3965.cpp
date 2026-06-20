class Solution {
public:

    long long rec(int n,vector<vector<int>>& v,vector<int>& baseTime){
        if(v[n].size()==0)return baseTime[n];
        long long maxi=0;long long mini=LLONG_MAX;
        for(int c:v[n]){
            long long t = rec(c,v,baseTime);
            mini = min(mini,t);
            maxi=max(maxi,t);
        }
        long long duration=(maxi-mini)+baseTime[n];
        return maxi+duration;
        
        
    }
    
    long long finishTime(int n, vector<vector<int>>& edges, vector<int>& baseTime) {
        vector<vector<int>>v(n);
        for(auto &e:edges){
            v[e[0]].push_back(e[1]);
        }
        long long ans = rec(0,v,baseTime);
        return ans;
        
    }
};