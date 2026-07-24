class Solution {
public:

    bool isValid(vector<int> nums, int days, int val, int max) {
        int countDay = 1;
        int sum = 0;

        if(max > val){
            return false;
        }

        for(int value : nums){
            sum += value;
            if(sum > val){
                countDay ++;
                sum = value;
            }

        }

        return (countDay <= days);
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        int mid = 0;
        while(low <= high) {
            mid = low + (high - low)/2;
            if(isValid(weights, days, mid, low)){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;

    }
};