class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int left1 = 0, left2 = 0;
        int odd1 = 0, odd2 = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] % 2 != 0) {
                odd1++;
                odd2++;
            }

            while (odd1 > k) {
                if (nums[left1] % 2 != 0)
                    odd1--;
                left1++;
            }

            while (odd2 >= k) {
                if (nums[left2] % 2 != 0)
                    odd2--;
                left2++;
            }

            ans += left2 - left1;
        }

        return ans;
    }
};