class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int int1=-1, int2=-1, flag=0;
        for(int i=0; i<nums.size(); i++){
            int j = nums[i];
            if(j == target){
                if(flag == 0){
                    int1 = i;
                    int2 = i;
                    flag++;
                } else{
                    cout<<i;
                    int2 = i;
                }
            }
        }
        ans.push_back(int1);
        ans.push_back(int2);
        return ans;
    }
};