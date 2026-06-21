class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>>ans;
         ans.push_back({rStart, cStart});
    
        int x=1;
        int y=rStart;
        int z=cStart;
       while(ans.size()<rows*cols){
        for(int i=0;i<x;i++){
            z++;
            if(y>=0&&y<rows&&z>=0&&z<cols){
                ans.push_back({y,z});
            }
        }

        for(int i=0;i<x;i++){
            y++;
            if(y>=0&&y<rows&&z>=0&&z<cols){
                ans.push_back({y,z});
            }
        }

        x++;

        for(int i=0;i<x;i++){
            z--;
            if(y>=0&&y<rows&&z>=0&&z<cols){
                ans.push_back({y,z});
            }
        }

        for(int i=0;i<x;i++){
            y--;
            if(y>=0&&y<rows&&z>=0&&z<cols){
                ans.push_back({y,z});
            }
        }

        x++;



       }
       return ans;
        
    }
};