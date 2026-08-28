class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int maxProdt = nums[0];
        int minProdt = nums[0];
      
        for(int i=1;i<nums.size();i++) {
            int curr = nums[i];
            if(curr < 0) swap(maxProdt, minProdt);

            maxProdt = max(curr, maxProdt*curr);
            minProdt = min(curr, minProdt*curr);
           

            res = max(res, maxProdt);
        }

        return res;
    }
};