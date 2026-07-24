class Solution {
public:

    bool isValid(vector<int> nums, int threshold, int val){
        
        int sum = 0;
        for(int value : nums){
            
            sum += ceil((double)value/val);
        }

        return(sum <= threshold);
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size() - 1;
        int low = 1; 
        int high = *max_element(nums.begin(), nums.end());
        int mid = 0;
        while(low <= high){
            mid = low + (high - low)/2;
            if(isValid(nums,threshold,mid)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }
        return low;
    }
};