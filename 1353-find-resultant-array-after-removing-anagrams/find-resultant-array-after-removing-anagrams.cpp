class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int i = 1;
        int n = words.size();

        while(i < n) {
            string first = words[i-1];
            string second = words[i];

            sort(first.begin(), first.end());
            sort(second.begin(), second.end());

            if(first == second) {
                words.erase(words.begin() + i);
                n--;
               
            } else {
                i ++;
            }
        }

        return words;
    }
};