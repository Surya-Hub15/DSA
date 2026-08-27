class Solution {
public:
    void merge(vector<int>& a, int n, vector<int>& b, int m) {
            

            int idx = m+n-1;
            int i = n-1 , j = m-1; 

            while(i >= 0 && j >= 0){
                if(a[i] >= b[j]){
                    a[idx] = a[i];
                    i--;
                    idx--;
                }
                else{
                    a[idx] = b[j];
                    j--;
                    idx--;
                }
            }

            while(i >= 0){
                a[idx] = a[i];
                idx--;
                i--;
            }

            while(j >= 0){
                a[idx] = b[j];
                idx--;
                j--;
            }
    }
};