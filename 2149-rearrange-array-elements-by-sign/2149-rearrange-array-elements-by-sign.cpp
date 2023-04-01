class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int even=0, odd=1;
        for(int i:nums){
            if(i>0){
                ans[even]=i;
                even+=2;
            }
            else{
                ans[odd]=i;
                odd+=2;
            }
        }
        return ans;
    }
};