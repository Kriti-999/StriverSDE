//Problem Link-"https://leetcode.com/problems/longest-consecutive-sequence/"
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            mp.insert(nums[i]);
        }
        for(auto m:mp){
            int p=m,c=1;
            while(mp.find(p+c)!=mp.end()){
                mp.erase(p+c);
                c++;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};