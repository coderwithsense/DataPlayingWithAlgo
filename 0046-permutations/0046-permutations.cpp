class Solution {
private:
    void solve(vector<vector<int>>& answer, vector<int> ans, vector<int> nums){
        if(nums.size() == 0){
            answer.push_back(ans);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            vector<int> temp = nums;
            vector<int> temp2 = {};
            vector<int> temp_ans = ans;
            temp_ans.push_back(temp[i]);
            for(int j=0; j<temp.size(); j++){
                if(j != i){
                    temp2.push_back(temp[j]);
                }
            }
            for(int i=0; i<temp2.size(); i++){
                cout<<temp2[i];
            }
            cout<<endl;
            solve(answer, temp_ans, temp2);
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