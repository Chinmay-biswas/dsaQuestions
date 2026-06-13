class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        map<char,int>mpp;
        
        int x=25;
        for(int i = 0; i < 26; i++){
                mpp['a' + i] = weights[i];
        }
        string a ="";
        for(int i=0;i<words.size();i++){
            int count=0;
            for(int j=0;j<words[i].size();j++){
            count+=mpp[words[i][j]];
        }
        int y=count%26;
        a.push_back('z' - y);

        }

        return a;
    }
};