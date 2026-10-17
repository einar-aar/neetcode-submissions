class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        long best_sum = nums[0];
        long sub_sum = 0;

        for (int i = 0; i < nums.size(); i++) {

            sub_sum += nums[i];
            
            best_sum = sub_sum > best_sum ? sub_sum : best_sum;

            if (sub_sum < 0) sub_sum = 0;
        }

        return best_sum;
    }
};
