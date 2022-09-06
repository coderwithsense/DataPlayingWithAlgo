class Solution {
public:
int lengthOfLongestSubstring(string s){
    if(s.size() == 0){
        return 0;
        }
        int start = 0;
        int ans = 0;
        for(int end = 0; end< s.size(); end++){
            for(int i = start; i<end;i++){
                if(s[i] == s[end]){
                    start = i+1;
                    break;
                }
            }
        ans = end-start+1>ans?end-start+1:ans;
    }
    return ans;
}
};
