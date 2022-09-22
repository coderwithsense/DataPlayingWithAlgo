class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans(nums.size());
        int even=0, odd=1;
        for(int i=0; i<nums.size(); i++){
            int number = nums[i];
            if(nums[i]%2==0){
                ans[even]=number;
                even+=2;
            }
            else{
                ans[odd]=number;
                odd+=2;
            }
        }
        return ans;
    }
};