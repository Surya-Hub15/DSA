class Solution {
public:

    long long isValid(vector<int>& piles, int val){
        long long totalH = 0;
        for(int bananas : piles){
            totalH += (bananas + (long long)val - 1) / val;
        }

        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int maxpile = *max_element(piles.begin(), piles.end());
        int low = 1;
        int high = maxpile;
        int ans = maxpile;
        while(low <= high){
            int mid = low + (high - low)/2;
            long long totalH = isValid(piles, mid);
            if(totalH <= h){
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