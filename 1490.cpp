class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>v;
        vector<int>ans;
        for(int i=1;i<=m;i++){
            v.push_back(i);
        }
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<v.size();j++){
                if(v[j]==queries[i]){
                    ans.push_back(j);
                    int a=v[j];
                    for(int x=j;x>0;x--){
                        
                        
                            v[x]=v[x-1];
                        
                        
                    }
                    v[0]=a;
                break;}
            }
        }
        return ans;
        
    }
};