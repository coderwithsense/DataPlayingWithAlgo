class Solution {
private:
    void solve(vector<char>& s,int index,int n){
        if(index>n/2){
            return;
        }
        swap(s[index], s[n-index]);
        solve(s, index+1, n);
    }
public:
    void reverseString(vector<char>& s) {
        solve(s, 0, s.size()-1);
    }
};