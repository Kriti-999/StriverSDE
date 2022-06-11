class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int b=0,e=n-1;
        while(b<n){
            reverse(matrix[b].begin(),matrix[b].end());
            b++;
        }
    }
};