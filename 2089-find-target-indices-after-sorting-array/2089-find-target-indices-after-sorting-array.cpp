class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
//         sorting
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(nums[i]>nums[j]){
                    swap(nums[i], nums[j]);
                }
            }
        }
        
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};