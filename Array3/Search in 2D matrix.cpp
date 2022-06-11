//Problem link:-https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=matrix.size()-1;
        int h=0,n=matrix[0].size();
        while(l>=0 && h<n){
            if(matrix[l][h]>target){
                l--;
            }
            else if(matrix[l][h]<target){
                h++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};