class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> output(nums.size());

        int left_product = 1;
        int right_product = 1;

        for (int i = 0; i < nums.size(); i++) {

            output[i] = left_product;
            left_product *= nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {

            output[nums.size() - i - 1] *= right_product;
            right_product *= nums[nums.size() - i - 1];
        }

        return output;
    }
};
