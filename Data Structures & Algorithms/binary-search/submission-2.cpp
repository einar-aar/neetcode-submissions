class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left_index = 0;
        int right_index = nums.size() - 1;
        int mid_index;

        for (int i = 0; i < nums.size(); i++) {

            mid_index = left_index + (right_index - left_index) / 2;

            if (nums[mid_index] == target) return mid_index;

            if (nums[mid_index] > target) {
                
                right_index = mid_index - 1;

            } else {
                
                left_index = mid_index + 1;
            }
        }

        return -1;
    }
};
