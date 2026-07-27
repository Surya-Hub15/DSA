class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff = 0;
        int currDiff = 0;
        bool flag = false;
        for(int i = 0;i<nums.size();i++) {
            for(int j = i+1;j<nums.size();j++) {
                if(nums[i] < nums[j]) {
                    flag = true;
                    currDiff = nums[j] - nums[i];
                    maxDiff = max(maxDiff,currDiff);
                }
            }
        }

        if(flag == false) {
            return -1;
        }
        else {
            return maxDiff;
        }
    }
};