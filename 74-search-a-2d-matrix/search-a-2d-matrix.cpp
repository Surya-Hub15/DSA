class Solution {
public:

    bool searchInRow(vector<vector<int>>& matrix, int target, int row) {
        int n = matrix[0].size();
        int st = 0, end = n - 1;

        while(st <= end) {
            int mid = st + (end - st)/2;

            if(matrix[row][mid] == target) {
                return true;
            }
            else if(matrix[row][mid] > target) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int strtR = 0;
        int endR = matrix.size() - 1;
        int midR = 0;

        while (strtR <= endR) {
            int midR = strtR + (endR - strtR)/2;
            int n = matrix[midR].size();

            if(matrix[midR][0] <= target && matrix[midR][n - 1] >= target) {
                return searchInRow(matrix, target, midR);
            }

            else if(matrix[midR][n - 1] < target) {
                strtR = midR + 1;
            }
            else {
                endR = midR - 1;
            }
        }

        return false;

    }
};