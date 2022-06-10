class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);
        ans[0]={1};
        if(numRows>1)ans[1]={1,1};
        for(int i=3;i<=numRows;i++){
            ans[i-1].resize(i);
            ans[i-1][0]=1;
            ans[i-1][i-1]=1;
            for(int j=1;j<i-1;j++){
              ans[i-1][j]=ans[i-2][j]+ans[i-2][j-1];  
            }
        }
        return ans;
    }
};