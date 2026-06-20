class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        map<int, priority_queue<int>> d;
        map<int, priority_queue<int, vector<int>, greater<int>>> u;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(i-j>=0){
                d[i-j].push(grid[i][j]);
                }
                else{
                    u[i-j].push(grid[i][j]);
                }
            
        }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){

                if(i-j>=0){
               grid[i][j]=d[i-j].top();
                d[i-j].pop();
                }
                else{
                    grid[i][j]=u[i-j].top();
                u[i-j].pop();
                }
                
            
        }
        }
        return grid;
    }
};