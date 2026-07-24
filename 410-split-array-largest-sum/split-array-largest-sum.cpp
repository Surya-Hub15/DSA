class Solution {
public:

    int countParts(vector<int> nums, int maxSum) {
        int sum = 0;
        int parts = 1;
        for(int val : nums) {
            sum += val;
            if(sum > maxSum){
                parts ++;
                sum = val;
            }
        }

        return parts;
    }

    int splitArray(vector<int>& nums, int k) {
        int max = *max_element(nums.begin(), nums.end());
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int ans = 0;
        while(max <= sum) {
            int mid = max + (sum - max)/2;
            int partitions = countParts(nums, mid);
            if(partitions > k) {
                max = mid + 1;
            }
            else {
                ans = mid;
                sum = mid - 1;
            }
           
        }

        return ans;
    }
};