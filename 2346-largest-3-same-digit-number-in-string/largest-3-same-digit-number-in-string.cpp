class Solution {
public:

    bool allSame(string str) {
        
        for(int i=0;i<str.length();i++) {
            if(str[i] != str[0]) {
               return false;
            }
        }
        return true;
    }

    string largestGoodInteger(string num) {
        int windSize = 3;
        int ans = INT_MIN;
        string ansStr = "";
         
        for(int i=0;i<num.length() - windSize + 1;i++) {
            string str = num.substr(i, windSize);

            if(allSame(str)) {
                int nums = stoi(str);

                if(nums > ans) {
                    ans = nums;
                    ansStr = str;
                }
            }
            
        }
        return ansStr;
        
    }
};