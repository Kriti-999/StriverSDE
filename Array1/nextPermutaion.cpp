class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),p=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                p=i;
                break;
            }
            
        }
        if(p==-1){
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i=n-1;i>p;i--){
            if(nums[p]<nums[i]){
                swap(nums[p],nums[i]);
                reverse(nums.begin()+p+1,nums.end());
                break;
            }
        }
        
    }
};