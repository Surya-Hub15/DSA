class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.length() != goal.length()) return false;

        string str = s + s;
        int windSize = goal.length();

        for(int i=0;i<s.length();i++) {
           
            if(str.substr(i,windSize) == goal) {
                return true;
            }
        }

        return false;
    }
};