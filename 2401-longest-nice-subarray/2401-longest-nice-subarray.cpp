class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int used = 0, i = 0, j = 0, res = 0;
        for(; i < nums.size(); i++) {
            while(used & nums[i]) {
                used ^= nums[j];
                j++;
            }
            res = max(res, i - j + 1);
            used |= nums[i];
        }
        return res;
    }
};