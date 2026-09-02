class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> m;
        for(char ch : s) {
            m[ch]++;
        }

        vector<pair<int, char>> arr;

        for(auto it : m) {
            arr.push_back({it.second, it.first});
        }

        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        string ans;

        for(auto p : arr) {
            for(int i=0;i<p.first;i++) {
                ans += p.second;
            }
        }

        return ans;
        
    }
};