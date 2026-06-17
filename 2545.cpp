class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>>ans;
        for(int i=0;i<score.size();i++){
            int maxi=-1,idx=-1;
            for(int j=0;j<score.size();j++){
                if(score[j][k]>maxi){
                    maxi=score[j][k];
                    idx=j;
                }


            }
            ans.push_back(score[idx]);
            score[idx][k] = -1;
            
        }
        return ans;

        
    }
};