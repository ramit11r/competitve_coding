class Solution {
public:
    long long findKthSmallest(vector<int>& coins, int k) {

        int n = coins.size();
        int totalMasks = 1 << n;

        sort(coins.begin(), coins.end());

        // Store LCM for every subset
        vector<long long> lcms(totalMasks, 1);

        // Store whether subset has odd/even number of coins
        vector<int> bits(totalMasks, 0);

        for (int mask = 1; mask < totalMasks; mask++) {

            // Get the lowest set bit
            int bit = __builtin_ctz(mask);

            // Remove that bit
            int prev = mask & (mask - 1);

            bits[mask] = bits[prev] + 1;

            long long g = gcd(lcms[prev], (long long)coins[bit]);

            lcms[mask] = (lcms[prev] / g) * coins[bit];

            // We don't need LCM values larger than our maximum answer
            if (lcms[mask] > 1LL * coins[0] * k) {
                lcms[mask] = 1LL * coins[0] * k + 1;
            }
        }

        long long low = coins[0];
        long long high = 1LL * coins[0] * k;

        while (low < high) {

            long long mid = low + (high - low) / 2;

            long long count = 0;

            for (int mask = 1; mask < totalMasks; mask++) {

                if (lcms[mask] > mid)
                    continue;

                long long multiples = mid / lcms[mask];

                if (bits[mask] % 2 == 1)
                    count += multiples;
                else
                    count -= multiples;
            }

            if (count < k)
                low = mid + 1;
            else
                high = mid;
        }

        return low;
    }
};