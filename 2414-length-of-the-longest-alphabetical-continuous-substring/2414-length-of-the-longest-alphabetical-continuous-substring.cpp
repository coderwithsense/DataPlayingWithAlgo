class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans = 1, max=1;
        for(int i=1; i<s.size(); i++){
            if(int(s[i])==int(s[i-1]+1)){
                max++;
            } else{
                max=1;
            }
            if(max>ans){
                ans=max;
            }
        }
        return ans;
    }
};