class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<vector<int>>v;
        int n=grid.size();
        int count=0;
        v=grid;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int a=0,b=0;
                for(int x=0;x<n;x++){
                    a=max(a,grid[i][x]);
                }
                for(int y=0;y<n;y++){
                    b=max(b,grid[y][j]);
                }
                count+=min(a,b)-v[i][j];
        }
}
        return count;
    }
};