class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        if(m==0){
            return 0;
        }
        int n=matrix[0].size();
        int res=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    continue;
                }if(i==0 || j==0){
                    res++;
                    continue;
                }
                int mini=min(matrix[i-1][j-1],min(matrix[i][j-1],matrix[i-1][j]));
                matrix[i][j]+=mini;
                res+=matrix[i][j];
            }
        }
        return res;
    }
};
