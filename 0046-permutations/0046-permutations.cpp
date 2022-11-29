class Solution {
private:
    void solve(vector<vector<int>>& answer, vector<int> ans, vector<int> nums){
        if(!nums.size()){
            answer.push_back(ans);
            ans = {};
            return;
        }
            for(int j=0; j<nums.size(); j++){
                vector<int> temp_nums = nums;
                vector<int> temp_ans = ans;
                temp_ans.push_back(temp_nums[j]);
                auto iterator = temp_nums.begin()+j;
                temp_nums.erase(iterator);
                solve(answer, temp_ans, temp_nums);
            }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answer = {};
        vector<int> ans;
        int n = nums.size();
        solve(answer, ans, nums);
        return answer;
    }
};