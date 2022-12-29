//Problem Link-"https://leetcode.com/problems/4sum/description/"
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
         vector<vector<int>>v;
         sort(nums.begin(),nums.end());
         for(int i=0;i<=n-4;i++){
               if(i==0 || nums[i]!=nums[i-1]){
             for(int j=i+1;j<=n-3;j++){
                 
                 if(j==i+1 || nums[j-1]!=nums[j]){
                 long long temp=target-nums[i];
                 temp=temp-nums[j];
                 int l=j+1,h=n-1;
                     while(l<h){
                     if(temp==nums[l]+nums[h]){
                         v.push_back({nums[i],nums[j],nums[l],nums[h]});
                         int low=nums[l];
                         while(low==nums[l] && l<h){
                         l++;
                        }
                        int high=nums[h];
                        while(nums[h]==high && l<h){
                            h--;
                        }
                     }
                     else if(temp>nums[l]+nums[h])l++;
                     else{
                         h--;
                     }
                     
                 }
                 }
                 }
             }
         }
         return v;
    }
};

