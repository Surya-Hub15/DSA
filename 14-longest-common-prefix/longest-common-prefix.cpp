class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty()) return "";

        sort(strs.begin(), strs.end());
        string strt = strs[0];
        string end = strs[strs.size()-1];
        string ans = "";
       
        int minLength = min(strt.length(), end.length());

        for(int i=0;i<minLength;i++) {
            if(strt[i] != end[i]) {
                break;
            }
            ans += strt[i];
        }

        return ans;        

    }
};