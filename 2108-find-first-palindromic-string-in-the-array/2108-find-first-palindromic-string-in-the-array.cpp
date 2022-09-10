class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string s=words[i];
            int n=s.size()-1;
            int flag=0, a=0, j=n;
            while(a<=j){
                if(s[a]!=s[j]){
                    flag=1;
                }
                a++;
                j--;
            }
            if(flag==0){
                return s;
            }
            flag=0;
        }
        return "";
    }
};