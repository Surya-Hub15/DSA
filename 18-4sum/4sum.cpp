class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i=0;i<n;i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;

            for(int j=i+1;j<n;j++) {
                if(j > (i+1) && nums[j] == nums[j-1]) continue;
                int k = j + 1;
                int t = n - 1;

                while(k < t) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[t];

                    if(sum < target) {
                        k ++;
                    }
                    else if(sum > target) {
                        t --;
                    }
                    else {
                        ans.push_back({nums[i], nums[j], nums[k], nums[t]});
                        k ++;
                        t --;

                        while(k < t && nums[k] == nums[k-1]) k++;
                    }
                }
            }
        }

        return ans;
    }
};