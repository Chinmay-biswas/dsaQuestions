class Solution {
public:
    string smallestNumber(string pattern) {
        stack<int>s;
        
        string str="";
        for(int i=0;i<=pattern.size();i++){
            s.push(i+1);
            if(i==pattern.size()||pattern[i]=='I'){
                while(!s.empty()){
                    str+=to_string(s.top());
                    s.pop();
                }
            }

        }
        return str;
        
    }
};