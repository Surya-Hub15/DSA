class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int currDepth = 0;
        for(char ch : s) {
            if(ch == '(') {
                currDepth ++;
                maxDepth = max(maxDepth, currDepth);
            }
            if(ch == ')') {
                currDepth --;
            }
        }

        return maxDepth;
    }
};