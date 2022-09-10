class Solution {
public:
    bool isPalindrome(string s) {
        int end = s.length()-1,start=0;
        
        string temp = "";
        
        for(int i=0;i<=end;i++)
        {
            if(isalnum(s[i]))
                temp += tolower(s[i]);
        }
       
        int tend = temp.length()-1;
        
        while(start<=tend){
            if(temp[start]==temp[tend]){
                start++;
                tend--;
            }
            else
                return false;
        }
        
        
        return true;
    }
};