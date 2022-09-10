class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            string res=temp;
            reverse(res.begin(), res.end());
            if(res == temp){
                return temp;
            }
        }
        return "";
    }
};