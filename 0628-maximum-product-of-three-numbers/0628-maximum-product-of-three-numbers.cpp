class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int fmax = INT_MIN, smax = INT_MIN, tmax = INT_MIN;
        int fmin = INT_MAX, smin = INT_MAX;

        for (int x : nums) {
            if (x > fmax) {
                tmax = smax;
                smax = fmax;
                fmax = x;
            } else if (x > smax) {
                tmax = smax;
                smax = x;
            } else if (x > tmax) {
                tmax = x;
            }

            if (x < fmin) {
                smin = fmin;
                fmin = x;
            } else if (x < smin) {
                smin = x;
            }
        }

        long long option1 = 1LL * fmax * smax * tmax;
        long long option2 = 1LL * fmax * fmin * smin;

        return (int)max(option1, option2);
    }
};