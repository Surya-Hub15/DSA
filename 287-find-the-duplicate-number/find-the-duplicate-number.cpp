class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set <int> s;
        int dup;

        for(int i=0;i<nums.size();i++) {
            if(s.find(nums[i]) != s.end()) {
                dup = nums[i];
                break;
            }
            s.insert(nums[i]);
        }

        return dup;
    }
};