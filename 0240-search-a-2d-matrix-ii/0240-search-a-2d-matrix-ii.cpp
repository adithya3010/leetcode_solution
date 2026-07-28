class Solution {
public:
    bool binarySearch(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) return true;
            if (arr[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int cols = matrix[0].size();

        for (int i = 0; i < matrix.size(); i++) {
            if (target >= matrix[i][0] && target <= matrix[i][cols - 1])
                if(binarySearch(matrix[i], target))return true;
        }

        return false;
    }
};