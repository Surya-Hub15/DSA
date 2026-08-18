class Solution {
public:
    string largestOddNumber(string nums) {
        int idx = -1;
        int i;

        for(i=nums.length()-1;i>=0;i--) {
            if((nums[i] - '0') % 2 == 1) {
                idx = i;
                break;
            }
        }

        i = 0;
        while(i < idx && nums[i] == '0') {
            i ++;
        }
        
        return nums.substr(i, idx - i + 1);
    }
};