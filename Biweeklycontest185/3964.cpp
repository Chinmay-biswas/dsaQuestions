class Solution {
public:
    int minLights(vector<int>& lights) {
        int s=lights.size();
        vector<int>visited(s,0);
        vector<int>d(s+1,0);
        for(int i=0;i<s;i++){
            if(lights[i]>0){
                int l = max(0,i-lights[i]);
                int r = min(s-1,i+lights[i]);
                d[l]++;
                if(r+1<s){
                    d[r+1]--;
                }
            }
        }

        int c=0;
        for(int i=0;i<s;i++){
            c+=d[i];
            if(c>0){visited[i]=1;}
        }
        
        int count =0,ans=0;
        for(int i=0;i<s;i++){
            if(visited[i]==0){
                count++;
            }
            else{
                ans+=(count+2)/3;
                count=0;
            }
        }
        ans+=(count+2)/3;
        return ans;
    }
};