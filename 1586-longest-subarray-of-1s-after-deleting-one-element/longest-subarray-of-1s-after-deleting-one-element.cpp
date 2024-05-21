class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int zeroCount = 0;
        int maxLength = 0;

        for (int right = 0; right < nums.size(); ++right) {
            if (nums[right] == 0) {
                zeroCount++;
            }

            while (zeroCount > 1) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            // Calculate the length of the current window
            // Subtract 1 because we are simulating the deletion of one element
            maxLength = max(maxLength, right - left);
        }

        // Return maxLength
        return maxLength;
    }
};