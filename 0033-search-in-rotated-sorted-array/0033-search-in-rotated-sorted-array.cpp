class Solution {
public:
    int search(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2; // Avoid potential overflow

            // Check if mid is the target
            if (arr[mid] == k) {
                return mid;
            }

            // Check if the left half is sorted
            if (arr[low] <= arr[mid]) {
                // If the target is in the sorted left half
                if (arr[low] <= k && k < arr[mid]) {
                    high = mid - 1;
                } else { 
                    low = mid + 1;
                }
            } 
            // Otherwise, the right half must be sorted
            else {
                // If the target is in the sorted right half
                if (arr[mid] < k && k <= arr[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return -1; // Target not found
    }
};
