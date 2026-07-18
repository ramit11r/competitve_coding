class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums.back()) low = mid + 1;
            else high = mid;
        }

        int rot = low;
        low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int real = (mid + rot) % n;

            if (nums[real] == target)
                return real;

            if (nums[real] < target) low = mid + 1;
            else high = mid - 1;
        }

        return -1;
    }
};