// number is palindrome?

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int ans = x;
        long long rev=0;
        while(x!=0){
            int num = x%10;
            x = x/10;
            rev = rev*10;
            rev = rev+num;
        }
        return rev==ans;
    }
};