//intution: solving using bfs or dfs
//solved using bfs, approach added in readme file.
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        queue<pair<int,int>> q;

       for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]==0)
            q.push({i,j});
        }
       }
       while(!q.empty()){
        auto cr = q.front();
        int x = cr.first;
        int y = cr.second;
        q.pop();

        for(int i=0; i<row; i++) matrix[i][y]=0;
        for(int i=0; i<col; i++) matrix[x][i]=0;
       }
    }
};