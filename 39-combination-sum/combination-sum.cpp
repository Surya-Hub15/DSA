class Solution {
public:

    void getCombinations(vector<int>& candidates, vector<vector<int>>& combinations, vector<int>& ans, int i, int target) {
        
        if(target == 0) {
            combinations.push_back(ans);
            return;
        }

        if(i >= candidates.size()) {
            return;
        }
           
        

        if(candidates[i] <= target) {
            ans.push_back(candidates[i]);
            getCombinations(candidates, combinations, ans, i, target - candidates[i]);
            ans.pop_back();
        }

        getCombinations(candidates, combinations, ans, i+1, target);
        
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> combinations;
        vector<int> ans;

        getCombinations(candidates, combinations, ans, 0, target);

        return combinations;
    }
};