class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int max_local = 0;
        
        for(int i=0; i<nums.size(); i++){
            max_local+=nums[i];
            if(max_local>max){
                max = max_local;
            }
            if(max_local < 0){
                max_local = 0;
            }
        }
        
        return max;
    }
};