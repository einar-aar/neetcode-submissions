#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> tested_values;
        int needed_value;

        for (int i = 0; i < nums.size(); i++) {

            needed_value =  target - nums[i];

            if (tested_values.find(needed_value) != tested_values.end()) {

                return vector<int>({tested_values[needed_value], i});
            }

            tested_values[nums[i]] = i;
        }
    }
};
