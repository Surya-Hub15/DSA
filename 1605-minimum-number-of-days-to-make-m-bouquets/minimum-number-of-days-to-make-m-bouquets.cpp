class Solution {
public:
    bool isPossible(vector<int> nums, int val, int m, int k){
        int n = nums.size();
        int countF = 0, countB = 0;
        for(int i=0;i<n;i++){
            
            if(nums[i] <= val){
                countF ++;
                if(countF == k){
                    countB ++;
                    if(countB == m){
                        return true;
                    }
                    countF = 0;
                }
            }else{
                countF = 0;
            }
        }
        return false;
    }

    int minDays(vector<int>& nums, int m, int k) {
        long long r = 1LL * m * k;
        if(r > nums.size()){
            return -1;
        }
        int low = *min_element(nums.begin(),nums.end());
        int high = *max_element(nums.begin(),nums.end());
        int mid = 0;
        int ans = -1;
        while(low <= high){
            mid = (low + high)/2;
            if(isPossible(nums, mid, m, k)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};