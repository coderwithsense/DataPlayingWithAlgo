class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        int n=nums.size();
        if(n == 0){
            return ans;
        }
        for(int i=1; i<n; i+=2){
            if(nums[i] != nums[i-1]){
                return nums[i-1];
            }
        }
        return nums[n-1];
    }
};