class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;

        for (int num : nums) {
            total += num;
        }

        int leftSum = 0;
        int n =nums.size();
        for (int i = 0; i < n; i++) {
            int rightSum = total - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};