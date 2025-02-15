class Solution {
    public int numEnclaves(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        int[][] vis=new int[n][m];
        // Arrays.fill(vis,0);
        for(int i=0;i<m;i++){
            if(grid[0][i]==1){
            dfs(0,i,grid,vis);
            }
            if(grid[n-1][i]==1){
            dfs(n-1,i,grid,vis);
            }
        }
        for(int j=0;j<n;j++){
            if(grid[j][0]==1){
            dfs(j,0,grid,vis);
            }
            if(grid[j][m-1]==1){
            dfs(j,m-1,grid,vis);
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    count++;
                }
            }
        }
        return count;
    }
    public void dfs(int n,int m,int[][] grid,int[][] vis){
        if(n<0 ||n>=grid.length || m<0 || m>=grid[0].length || grid[n][m]!=1 || vis[n][m]!=0){
            return;
        }
        vis[n][m]=1;
        dfs(n,m-1,grid,vis);
        dfs(n,m+1,grid,vis);
        dfs(n-1,m,grid,vis);
        dfs(n+1,m,grid,vis);
    }
}