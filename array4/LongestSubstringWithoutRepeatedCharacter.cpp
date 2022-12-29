//Problem Link-"https://leetcode.com/problems/longest-substring-without-repeating-characters/"
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,start=0;
        unordered_map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                if(start<=mp[s[i]]){
                    start=mp[s[i]]+1;
                }
                mp[s[i]]=i;
            }
            else{
                mp[s[i]]=i;
            }
            ans=max(ans,i-start+1);
            //cout<<ans<<"&";
        }
        return ans;
    }
};